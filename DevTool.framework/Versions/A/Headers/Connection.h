//
//  Connection.h
//  BarcodeFramework
//
//  Created by mikimoto on 2010/7/9.
//  Copyright 2010 MobiLogics. All rights reserved.
//

#import <Foundation/Foundation.h>


@protocol ConnectionBuilderProtocol

-(NSArray *)getSupportReceiveCommand;
-(NSArray *)getSupportAccessory;

@end


/**
 * @brief create accessory connection, when you use Barcode framework, you should use this object to create connection with iPDT380 or iScan first.
 *
 * Connection is an Translate Layer, it can used to create connection and send object which is define in Command Layer.
 * 
 * After your program is running, you must call isConnected function first to detect that iPDT380 or iScan is plug in.
 * <pre>
 *       [[Connection sharedInstnce] isConnected];
 * </pre>
 * And after you call isConnected function, then you can call execute function to send command layer object to iPDT380 or iScan.
 * <pre>
 *       [[Connection sharedInstance] execute:[ScanShot sharedInstance]];
 * </pre>
 */
@interface Connection : NSObject<EAAccessoryDelegate> {
 @private
  NSMutableDictionary *sessionDictionary;
  NSMutableArray *connectNotificationArray;
  NSMutableArray *disconnectNotificationArray;
  NSMutableArray *receiveCommandArray;
  NSMutableArray *receiveCommandHandlerArray;
  NSString *eaDSessionDataReceivedNotification;
  NSMutableArray *commandQueue;
  NSTimer *timerForExecuteCommandQueue;
  NSMutableArray *accessoryArray;
  NSMutableArray *originAccessoryArray;
  BOOL isConnect;
}

-(void)setBuilder:(NSObject<ConnectionBuilderProtocol> *)builder;
-(Accessory *)connectedAccessory;

/**
 * @brief detect iPDT380 or iScan is connected or not.
 *
 * @retval TRUE iPDT380 or iScan is connected and work fine.
 * @retval FALSE iPDT380 or iScan is not connected, or device error. In this status, command layer object will not send.
 */
- (BOOL)isConnected;

/**
 * @brief execute Command Layer Object.
 * 
 * send command layer object to iPDT380 or iScan, but when isConnected return FALSE, command will skip. 
 * @see isConnected
 *
 * @param command command layer object
 */
- (void)execute:(Command *)command;

//-(NSString *)getSessionKey:(EAAccessory *);
-(NSString *)eaDSessionDataReceivedNotification;

/**
 * @brief add handler to handle iPDT380 or iScan connected event
 *
 * handler must implement NotificationHandler protocol<br>
 * If you use UIView, you can add handler in viewDidLoad.<br>
 * Please remove handler in viewDidUnload.
 * @see removeAccessoryDidConnectNotification:(NSObject<NotificationHandler> *) handler
 * @see addAccessoryDidDisconnectNotification:(NSObject<NotificationHandler> *) handler
 * @see removeAccessoryDidDisconnectNotification:(NSObject<NotificationHandler> *) handler
 *
 * @param handler the object implement NotificationHandler protocol
 */
- (void)addAccessoryDidConnectNotification:(NSObject<NotificationHandler> *) handler;

/**
 * @brief remove handler not to handle iPDT380 or iScan connected event
 *
 * After you remove handler, you will not trigger with iPDT380 or iScan connected event.
 * @see addAccessoryDidConnectNotification:(NSObject<NotificationHandler> *) handler
 * @see addAccessoryDidDisconnectNotification:(NSObject<NotificationHandler> *) handler
 * @see removeAccessoryDidDisconnectNotification:(NSObject<NotificationHandler> *) handler
 *
 * @param handler the object implement NotificationHandler protocol
 */
- (void)removeAccessoryDidConnectNotification:(NSObject<NotificationHandler> *) handler;

/**
 * @brief add handler to handle iPDT380 or iScan disconnected event
 *
 * handler must implement NotificationHandler protocol<br>
 * If you use UIView, you can add handler in viewDidLoad.<br>
 * Please remove handler in viewDidUnload.
 * @see addAccessoryDidConnectNotification:(NSObject<NotificationHandler> *) handler
 * @see removeAccessoryDidConnectNotification:(NSObject<NotificationHandler> *) handler
 * @see removeAccessoryDidDisconnectNotification:(NSObject<NotificationHandler> *) handler
 *
 * @param handler the object implement NotificationHandler protocol
 */
- (void)addAccessoryDidDisconnectNotification:(NSObject<NotificationHandler> *) handler;

/**
 * @brief remove handler not to handle iPDT380 or iScan disconnected event
 *
 * After you remove handler, you will not trigger with iPDT380 or iScan disconnected event.
 * @see addAccessoryDidConnectNotification:(NSObject<NotificationHandler> *) handler
 * @see removeAccessoryDidConnectNotification:(NSObject<NotificationHandler> *) handler
 * @see addAccessoryDidDisconnectNotification:(NSObject<NotificationHandler> *) handler
 *
 * @param handler the object implement NotificationHandler protocol
 */
- (void)removeAccessoryDidDisconnectNotification:(NSObject<NotificationHandler> *) handler;

/**
 * @brief add handler to handle receive command layer object which send from iPDT380 or iScan event.
 * 
 * Send Command and Receive Command is Asynchronous, so after you send command, you can fire and forget.<br>
 * 
 * 接收到回傳的 Command 不一定是剛剛送出的 Command 所觸發的，也可能是硬體主動送回來的 Command <br>
 * 後續相關程式處理可以查閱 ReceiveCommandHandler protocol<br>
 * handler must implement ReceiveCommandHandler protocol<br>
 * If you use UIView, you can add handler in viewDidLoad.<br>
 * Please remove handler in viewDidUnload.
 * @see ReceiveCommandHandler
 * @see removeReceiveCommandHandler:(NSObject<ReceiveCommandHandler> *) handler
 *
 * @param handler the object implement ReceiveCommandHandler protocol
 */
- (void)addReceiveCommandHandler:(NSObject<ReceiveCommandHandler> *) handler;

/**
 * @brief remove handler which handle receive command layer object event
 * 
 * After you remove handler, you will not trigger with iPDT380 or iScan receive command event.
 * @see addReceiveCommandHandler:(NSObject<ReceiveCommandHandler> *) handler
 *
 * @param handler the object implement ReceiveCommandHandler protocol
 */
- (void)removeReceiveCommandHandler:(NSObject<ReceiveCommandHandler> *) handler;

-(void)addReceiveCommand:(NSObject<CommandReceiver> *) command;
-(void)removeReceiveCommand:(NSObject<CommandReceiver> *) command;

//-(void)addAccessory:(Accessory *)accessory NS_DEPRECATED(10_0,10_4,2_0,2_0);
//-(void)removeAccessory:(Accessory *)accessory NS_DEPRECATED(10_0,10_4,2_0,2_0);

SYNTHESIZE_SINGLETON_FOR_CLASS_HEADER( Connection );

@end
