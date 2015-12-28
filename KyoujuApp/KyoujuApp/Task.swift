//
//  Task.swift
//  KyoujuApp
//
//  Created by 與世山 喬基 on 2015/12/28.
//  Copyright © 2015年 與世山 喬基. All rights reserved.
//

import UIKit
import RealmSwift

class Task: Object {
    // 管理用 ID。プライマリーキー
    dynamic var id = 0
    
    // タイトル
    dynamic var title = ""
    
    // 本文
    dynamic var body = ""
    
    /// 最終更新日時
    dynamic var date = NSDate()
    
    /**
     id をプライマリーキーとして設定
     */
    override static func primaryKey() -> String? {
        return "id"
    }
}
