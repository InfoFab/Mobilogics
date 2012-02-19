//
//  ScanShotReceiver.h
//  BarcodeFramework
//
//  Created by mikimoto on 2010/7/22.
//  Copyright 2010 MobiLogics. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 * @brief iPDT380 or iScan after scan barcode, it will return this CommandReceiver
 *
 * Whaterver hardware trigger scan or software trigger scan, Apps will get this CommandReceiver once.
 * 硬體回覆 ScanShotReceiver 不一定是軟體或硬體觸發所致，掃描完 barcode 後，舊會將資料包裝成此 CommandReceiver 回傳
 */
@interface ScanShotReceiver : CommandReceiverImpl {
}

@end
