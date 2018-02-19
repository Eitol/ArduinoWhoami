/**
 * @file       DetectDevice.h
 * @author     Hector Oliveros. (Based on DectectDevice.h of Volodymyr Shymanskyy) 
 * @license    This project is released under the MIT License (MIT) 
 
 * @brief
 *
 */

#ifndef ArduinoWhoami_h
#define ArduinoWhoami_h

#include "CPUType.h"
#include "DeviceType.h"


class ArduinoWhoami
{
  public:
    static CPU getCPUType();
    static Device getDeviceType();
};

#endif