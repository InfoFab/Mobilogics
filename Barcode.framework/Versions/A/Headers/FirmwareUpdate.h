//
//  FirmwareUpdate.h
//  BarcodeFramework
//
//  Created by mikimoto on 2010/8/29.
//  Copyright 2010 MobiLogics. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FirmwareUpdateState.h"


/**
 * @brief firmware update command
 *
 * 執行 firmware update command 後，他將繼續在背景持續傳送命令直到完成，若有錯誤或是太久沒回應
 * 命令將自動終止執行<br/><br/>
 * 命令執行前，請先使用 setUpdateFilePath:(NSString *)anUpdateFilePath 設定好軔體更新檔
 * 否則不會有動作
 */
@interface FirmwareUpdate : Command {
 @private
  NSString *updateFilePath;
  FirmwareUpdateState *updateState;
  BOOL inProcess;
  BOOL upgradeResult;
}

- (void)setUpdateFilePath:(NSString *)anUpdateFilePath;
- (void)nextState;
- (BOOL)isInProcess;
- (BOOL)upgradeResult;
- (float)processProgress; 
- (void)interrupeState;

SYNTHESIZE_SINGLETON_FOR_CLASS_HEADER( FirmwareUpdate );

@end
