//
//  ViewController.swift
//  KyoujuApp
//
//  Created by 與世山 喬基 on 2015/12/01.
//  Copyright © 2015年 與世山 喬基. All rights reserved.
//

import UIKit
import RealmSwift

class ViewController: UIViewController, UITableViewDelegate, UITableViewDataSource {

    @IBOutlet weak var tableView: UITableView!
    @IBOutlet weak var addButton: UIButton!
    
    // Relamのインスタンスを取得
    let realm = try! Realm()
    
    // 登録するタスクを格納するリスト(〆切が近い順でソート)
    let dataArray = try! Realm().objects(Task).sorted("date", ascending: true)
    
    override func viewDidLoad() {
        super.viewDidLoad()
    }
    
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
    }

    // 入力画面から戻って来たらテーブルを更新する
    override func viewWillAppear(animated: Bool) {
        super.viewWillAppear(animated)
        tableView.reloadData()
    }
    
    // 画面遷移するときのイベント
    // セルが押されたらタスクを表示
    // 追加ボタンが押されたら空のタスク画面を表示
    override func prepareForSegue(segue: UIStoryboardSegue, sender: AnyObject?){
        let inputViewController:InputViewController = segue.destinationViewController as! InputViewController
        if segue.identifier == "cellSegue" {
            let indexPath = self.tableView.indexPathForSelectedRow
            inputViewController.task = dataArray[indexPath!.row]
        } else {
            let task = Task()
            if dataArray.count != 0 {
                task.id = dataArray.max("id")! + 1
            }
            inputViewController.task = task
        }
    }
    
    // UITableViewDataSourceプロトコルのメソッド
    // TableViewの各セクションのセルの数を返す
    func tableView(tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return dataArray.count
    }
    
    // 各セルの内容を返す
    func tableView(tableView: UITableView, cellForRowAtIndexPath indexPath: NSIndexPath) -> UITableViewCell {
        // 再利用可能なcellを得る
        let cell: UITableViewCell = UITableViewCell(style: UITableViewCellStyle.Subtitle, reuseIdentifier: "Cell")

        // cellに値を設定する.
        let object = dataArray[indexPath.row]
        
        // 日付のフォーマットを生成
        let dateFormatter: NSDateFormatter = NSDateFormatter()
        dateFormatter.locale = NSLocale(localeIdentifier:"ja_JP")
        dateFormatter.dateFormat = "yyyy年MM月dd日(EEE)"
        
        // 日付のフォーマットに則って〆切期日を取得
        let dateLimit: NSString = dateFormatter.stringFromDate(object.date)
        
        // 各セルにレポート名と〆切を表示
        cell.textLabel?.text = object.title
        cell.detailTextLabel?.text = "〆切：\(dateLimit)"
        return cell
    }
    
    // UITableViewDataSourceプロトコルのメソッド
    // Deleteボタンが押された時の処理を行う
    func tableView(tableView: UITableView, commitEditingStyle editingStyle: UITableViewCellEditingStyle, forRowAtIndexPath indexPath: NSIndexPath) {
        if editingStyle == UITableViewCellEditingStyle.Delete {
            try! realm.write {
                self.realm.delete(self.dataArray[indexPath.row])
                tableView.deleteRowsAtIndexPaths([indexPath], withRowAnimation: UITableViewRowAnimation.Fade)
            }
        }
    }
    
    // セルが削除が可能なことを伝える
    func tableView(tableView: UITableView, editingStyleForRowAtIndexPath indexPath: NSIndexPath)-> UITableViewCellEditingStyle {
        return UITableViewCellEditingStyle.Delete;
    }
    
    // 各セルを選択したときに実行される
    func tableView(tableView: UITableView, didSelectRowAtIndexPath indexPath: NSIndexPath) {
        performSegueWithIdentifier("cellSegue",sender: nil)
    }
}

