//
//  NotificationHandler.h
//  BarcodeFramework
//
//  Created by mikimoto on 2010/7/12.
//  Copyright 2010 MobiLogics. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ExternalAccessory/ExternalAccessory.h>


/**
 * @brief iPDT380 or iScan connected or disconnected event handler must implement this protocol
 */
@protocol NotificationHandler

/**
 * @brief when hardware connected, it will trigger this method
 *
 * 硬體裝置連接上後，BarcodeFramework 會自動判斷硬體裝置是否可以使用，並建立連線<br>
 * 連線建立成功後，且已經透過
 * <pre>
 *      [[Connection sharedInstance] addAccessoryDidConnectNotification:self];
 * </pre>
 * 將此 handler 加入 Notification List 會依 Notification List 加入順序，被依序觸發本 method
 */
-(void)connectNotify;

/**
 * @brief when hardware disconnected, it will trigger this method
 *
 * 當硬體裝置離線後，Barcode Framework 會清除連線後，且已經透過
 * <pre>
 *      [[Connection sharedInstance] addAccessoryDidDisconnectNotification:self];
 * </pre>
 * 將此 handler 加入 Notification List 會依 Notification List 加入順序，被依序觸發本 method
 */
-(void)disconnectNotify;

@end

/**
 * @brief recevie command handler must implement this protocol
 */
@protocol ReceiveCommandHandler

/**
 * @brief After Barcode Framework recevie Command, it will trigger this method to make sure that handler will handle it or not
 *
 * 當 Barcode Framework 接收到 Command 時，有透過
 * <pre>
 *      [[Connection sharedInstance] addReceiveCommandHandler:self];
 * </pre>
 * 加入 Notification List 的 handler 會依 Notification List 加入順序，被依序觸發
 *
 * @param command the object implement CommandReceiverProtocol protocol 
 * @retval TRUE handler will handle this Command
 * @retval FALSE handler will not handle this Command  handleRequest:(NSObject<CommandReceiverProtocol> *)command will not be trigger
 */
- (BOOL)isHandler:(NSObject<CommandReceiver> *)command;

/**
 * @brief After Barcode Framework recevie Command, it will trigger this method and let handler take care this Command
 *
 * 當 Barcode Framework 接收到 Command 時，有透過
 * <pre>
 *      [[Connection sharedInstance] addReceiveCommandHandler:self];
 * </pre>
 * 加入 Notification List 的 handler 會依 Notification List 加入順序，被依序觸發 isHandler:(NSObject<CommandReceiverProtocol> *)command
 * 當 isHandler:(NSObject<CommandReceiverProtocol> *)command 回應 TRUE 時，本 mathod 才會被觸發
 * @see isHandler:(NSObject<CommandReceiverProtocol> *)command
 *
 * @param command implement CommandReceiverProtocol protocol 的物件 
 */
- (void)handleRequest:(NSObject<CommandReceiver> *)command;

@end