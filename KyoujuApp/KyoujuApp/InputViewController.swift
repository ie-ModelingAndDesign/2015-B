//
//  InputViewController.swift
//  KyoujuApp
//
//  Created by 與世山 喬基 on 2015/12/01.
//  Copyright © 2015年 與世山 喬基. All rights reserved.
//

import UIKit
import RealmSwift

class InputViewController: UIViewController, UITextFieldDelegate {
    
    @IBOutlet weak var titleTextField: UITextField!
    @IBOutlet weak var dateTextField: UITextField!
    @IBOutlet weak var bodyTextView: UITextView!
    @IBOutlet weak var saveButton: UIButton!
    
    let realm = try! Realm()
    var task: Task!

    override func viewDidLoad() {
        super.viewDidLoad()
        
        titleTextField.delegate = self
        titleTextField.returnKeyType = UIReturnKeyType.Next
        dateTextField.delegate = self
        
        let dateFormatter: NSDateFormatter = NSDateFormatter()
        dateFormatter.locale = NSLocale(localeIdentifier:"ja_JP")
        dateFormatter.dateFormat = "yyyy年MM月dd日(EEE)"

        let dateLimit: NSString = dateFormatter.stringFromDate(task.date)
        
        // 各セルが押されたときは、各セルの内容をテキストフィールドに表示
        titleTextField.text = task.title
        if task.title == "" {
            dateTextField.text = ""
        } else {
            dateTextField.text = dateLimit as String
        }
        bodyTextView.text = task.body
        
        // ナビゲーションバーの戻るボタンを消す
        self.navigationItem.setHidesBackButton(true, animated:false);
        
        // DatePickerを生成
        let datePicker: UIDatePicker = UIDatePicker()
        
        // DatePickerを設定
        datePicker.frame = CGRectMake(0, 50, self.view.frame.width, 200)
        datePicker.timeZone = NSTimeZone.localTimeZone()
        datePicker.datePickerMode = UIDatePickerMode.Date
        datePicker.backgroundColor = UIColor.whiteColor()
        datePicker.layer.cornerRadius = 5.0
        datePicker.layer.shadowOpacity = 0.5
        datePicker.locale = NSLocale(localeIdentifier:"ja_JP")
        
        // 値が変わった際のイベントを登録
        datePicker.addTarget(self, action: "onDidChangeDate:", forControlEvents: .ValueChanged)
        
        // ToolBarを生成
        var toolBar:UIToolbar!
        toolBar = UIToolbar(frame: CGRectMake(0, self.view.frame.size.height/6, self.view.frame.size.width, 40.0))
        toolBar.layer.position = CGPoint(x: self.view.frame.size.width/2, y: self.view.frame.size.height-20.0)
        toolBar.barStyle = .BlackTranslucent
        toolBar.tintColor = UIColor.whiteColor()
        toolBar.backgroundColor = UIColor.whiteColor()
        
        // キャンセルボタンと完了ボタンを配置
        let toolBarButtonGap = UIBarButtonItem(barButtonSystemItem: UIBarButtonSystemItem.FlexibleSpace, target: nil, action: nil)
        let toolBarBtnFinish      = UIBarButtonItem(title: "完了", style: .Plain, target: self, action: "tappedToolBarBtnFinish:")
        let toolBarBtnCancel = UIBarButtonItem(title: "キャンセル", style: .Plain, target: self, action: "tappedToolBarBtnCancel:")
        
        toolBarBtnFinish.tag = 1
        toolBar.items = [toolBarBtnCancel,toolBarButtonGap, toolBarBtnFinish]
        
        // 〆切のテキストフィールドが押されたときにDatePickerとToolBarを表示
        dateTextField.inputAccessoryView = toolBar
        dateTextField.inputView = datePicker
    }
    
    // テキストフィールド内でリターンキーを押したときのイベント
    // レポート名入力後にリターンキーを押したときは〆切日入力に移動する
    func textFieldShouldReturn(textField: UITextField) -> Bool {
        if textField == titleTextField {
            dateTextField?.becomeFirstResponder()
        } else {
            dateTextField.resignFirstResponder()
        }
        
        // テキストフィールド内が空じゃなければボタンを+マークに変える
        if titleTextField.text != "" || dateTextField.text != "" || bodyTextView.text != "" {
            saveButton.setTitle("+", forState: .Normal)
        } else {
            saveButton.setTitle("×", forState: .Normal)
        }
        
        return true
    }
    
    func textViewShouldEndEditing(textView: UITextView) -> Bool {
        bodyTextView.resignFirstResponder()
        return true
    }
    
    // キーボード入力時にキーボード外をタッチするとキーボードを閉じる
    // 〆切日入力時のDatePickerでも同様
    override func touchesBegan(touches: Set<UITouch>, withEvent event: UIEvent?) {
        titleTextField.resignFirstResponder()
        textFieldShouldReturn(dateTextField)
        textViewShouldEndEditing(bodyTextView)
    }
    
    // DatePickerが操作されたときのイベント
    internal func onDidChangeDate(sender: UIDatePicker) {
        // 日付のフォーマットを生成.
        let dateFormatter: NSDateFormatter = NSDateFormatter()
        dateFormatter.locale = NSLocale(localeIdentifier:"ja_JP")
        dateFormatter.dateFormat = "yyyy年MM月dd日(EEE)"
        
        // 日付をフォーマットに則って取得.
        let selectedDate: NSString = dateFormatter.stringFromDate(sender.date)
        dateTextField.text = selectedDate as String
    }
    
    // ToolBarの完了ボタンが押されたときのイベント
    func tappedToolBarBtnFinish(sender: UIBarButtonItem) {
        dateTextField.resignFirstResponder()
        textFieldShouldReturn(dateTextField)
        textViewShouldEndEditing(bodyTextView)
    }
    
    // ToolBarのキャンセルボタンが押されたときのイベント
    // 空の文字列をテキストフィールドに返す
    func tappedToolBarBtnCancel(sender: UIBarButtonItem) {
        dateTextField.text = ""
        dateTextField.resignFirstResponder()
        textFieldShouldReturn(dateTextField)
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    // 保存ボタンが押されたときのイベント
    // 各データをデータベースに保存し、テーブルに戻る
    @IBAction func saveAction(sender: AnyObject) {
        // ボタンが＋マークのときはタスクをデータベースに保存
        // ボタンが×マークのときは入力画面をそのまま閉じる
        if saveButton.titleLabel?.text == "+" {
            // タスク名やまたは〆切が入力されていなければエラーアラートを表示しリターン
            if self.titleTextField.text == "" || self.dateTextField.text == "" {
                let alertController = UIAlertController(title: "エラー", message: "",preferredStyle: .Alert)
                let defaultAction = UIAlertAction(title: "OK", style: .Default, handler: nil)
                alertController.addAction(defaultAction)
                if self.titleTextField.text != "" {
                    alertController.message = "〆切日を入力してください"
                    presentViewController(alertController, animated: true, completion: nil)
                    return
                } else if self.dateTextField.text != ""{
                    alertController.message = "レポート名を入力してください"
                    presentViewController(alertController, animated: true, completion: nil)
                    return
                } else {
                    alertController.message = "レポート名と〆切日を入力してください"
                    presentViewController(alertController, animated: true, completion: nil)
                    return
                }
            } else {
                try! realm.write {
                    let dateFormatter: NSDateFormatter = NSDateFormatter()
                    dateFormatter.locale = NSLocale(localeIdentifier:"ja_JP")
                    dateFormatter.dateFormat = "yyyy年MM月dd日(EEE)"
                    
                    let taskLimit = dateFormatter.dateFromString(self.dateTextField.text!)
                    
                    self.task.title = self.titleTextField!.text!
                    self.task.body = self.bodyTextView!.text!
                    self.task.date = NSDate(timeInterval: 0, sinceDate: taskLimit!)
                    self.realm.add(self.task, update: true)
                }
            }
        }
        // 入力画面を閉じ、前の画面に遷移する
        self.navigationController?.popViewControllerAnimated(true)
        self.dismissViewControllerAnimated(true, completion: nil)
    }
}
