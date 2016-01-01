//
//  Task.swift
//  KyoujuApp
//
//  Created by 與世山 喬基 on 2015/12/01.
//  Copyright © 2015年 與世山 喬基. All rights reserved.
//

import RealmSwift

class Task: Object {
    // 管理用ID(プライマリーキー)
    dynamic var id = 0
    
    // レポートタイトル
    dynamic var title = ""
    
    // レポートの詳細
    dynamic var body = ""
    
    /// 〆切日時
    dynamic var date = NSDate()
    
    // IDをプライマリーキーとして設定
    override static func primaryKey() -> String? {
        return "id"
    }
}
