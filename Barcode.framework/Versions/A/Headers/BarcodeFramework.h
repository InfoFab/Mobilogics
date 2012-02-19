/**
 *  @file BarcodeFramework.h
 *  @brief BarcodeFramework header file, please read this first
 *  
 *  Use BarcodeFramework in your project, just follow these three steps:<br>
 *    1. Add ExternalAccessory framework to your project.<br>
 *    2. Add Barcode framework and DevTool framework to your project ( you must install mobilogics sdk first, after you installed,
 * you can found Barcode framework in 
 * <pre> /Library/Frameworks/Mobilogics.framework/Frameworks/Barcode.framework </pre> and 
 * <pre> /Library/Frameworks/Mobilogics.framework/Frameworks/DevTool.framework.</pre><br>
 *    3. Add
 *    <pre>
 *          #import <Barcode/BarcodeFramework.h>
 *    </pre>
 *       and 
 *    <pre>
 *          #import <DevTool/DevToolFramework.h> 
 *    </pre>
 *       on your header file.<br>
 *
 *  Before you use Barcode framework, please read Connection class first.<br>
 *  You can also new Barcode Example Application template which include in Mobilogics SDK as your new project.<br>
 *
 *  Copyright 2010 MobiLogics. All rights reserved.
 *
 *  @author Created by mikimoto on 2010/7/12.
 *  
 *
 */

#ifndef __BARCODEFRAMEWORK__
  #define __BARCODEFRAMEWORK__

  #import <DevTool/DevToolFramework.h>

  #ifndef BARCODEFRAMEWORK_BUILD

    #import <Barcode/IPDT380.h>
    #import <Barcode/IScan.h>

    #import <Barcode/TransmitCodeIdStateNone.h>
    #import <Barcode/TransmitCodeIdStateAIM.h>
    #import <Barcode/TransmitCodeIdStateSymbol.h>

    #import <Barcode/ScanDataTransmissionFormatType1.h>
    #import <Barcode/ScanDataTransmissionFormatType2.h>
    #import <Barcode/ScanDataTransmissionFormatType3.h>
    #import <Barcode/ScanDataTransmissionFormatType4.h>
    #import <Barcode/ScanDataTransmissionFormatType5.h>
    #import <Barcode/ScanDataTransmissionFormatType6.h>
    #import <Barcode/ScanDataTransmissionFormatType7.h>
    #import <Barcode/ScanDataTransmissionFormatType8.h>

    #import <Barcode/PrefixCharacter.h>
    #import <Barcode/Suffix1Character.h>
    #import <Barcode/Suffix2Character.h>

    #import <Barcode/BeepToneStateHigh.h>
    #import <Barcode/BeepToneStateMedium.h>
    #import <Barcode/BeepToneStateLow.h>

    #import <Barcode/TriggerModeStateLevel.h>
    #import <Barcode/TriggerModeStatePulse.h>
    #import <Barcode/TriggerModeStateContinuous.h>
    #import <Barcode/TriggerModeStateBlinking.h>
    #import <Barcode/TriggerModeStateHost.h>

    #import <Barcode/ScanShot.h>
    #import <Barcode/ScanShotReceiver.h>

    #import <Barcode/FirmwareUpdate.h>
    #import <Barcode/BarcodeBuilder.h>

  #else

    #import "IPDT380.h"
    #import "IScan.h"

    #import "TransmitCodeIdStateNone.h"
    #import "TransmitCodeIdStateAIM.h"
    #import "TransmitCodeIdStateSymbol.h"

    #import "ScanDataTransmissionFormatType1.h"
    #import "ScanDataTransmissionFormatType2.h"
    #import "ScanDataTransmissionFormatType3.h"
    #import "ScanDataTransmissionFormatType4.h"
    #import "ScanDataTransmissionFormatType5.h"
    #import "ScanDataTransmissionFormatType6.h"
    #import "ScanDataTransmissionFormatType7.h"
    #import "ScanDataTransmissionFormatType8.h"

    #import "PrefixCharacter.h"
    #import "Suffix1Character.h"
    #import "Suffix2Character.h"

    #import "BeepToneStateHigh.h"
    #import "BeepToneStateMedium.h"
    #import "BeepToneStateLow.h"

    #import "TriggerModeStateLevel.h"
    #import "TriggerModeStatePulse.h"
    #import "TriggerModeStateContinuous.h"
    #import "TriggerModeStateBlinking.h"
    #import "TriggerModeStateHost.h"

    #import "ScanShot.h"
    #import "ScanShotReceiver.h"

    #import "FirmwareUpdate.h"
    #import "BarcodeBuilder.h"
  #endif
#endif
