//
//  InputViewController.swift
//  KyoujuApp
//
//  Created by 與世山 喬基 on 2015/12/28.
//  Copyright © 2015年 與世山 喬基. All rights reserved.
//

import UIKit
import RealmSwift

class InputViewController: UIViewController {
    
    @IBOutlet weak var titleTextField: UITextField!
    @IBOutlet weak var bodyTextView: UITextView!
    
    let realm = try! Realm()
    var task: Task!

    override func viewDidLoad() {
        super.viewDidLoad()
        
        self.navigationItem.setHidesBackButton(true, animated:false);
        
       

        // Do any additional setup after loading the view.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    @IBAction func save(sender: UIButton) {
        try! realm.write {
            self.task.title = self.titleTextField.text!
            self.task.body = self.bodyTextView.text
            self.task.date = NSDate()
            self.realm.add(self.task, update: true)
        }
        
        self.navigationController?.popViewControllerAnimated(true)
    }
    
}
