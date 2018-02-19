#include "ArduinoWhoami.h"


CPU ArduinoWhoami::getCPUType()
{
    #ifndef INFO_CPU
    // ATMEGA
    #if defined(__AVR_ATmega168__)
            return ATmega168;
    #elif defined(__AVR_ATmega328P__)
            return ATmega328P;
    #elif defined(__AVR_ATmega1280__)
            return ATmega1280;
    #elif defined(__AVR_ATmega1284__)
            return ATmega1284;
    #elif defined(__AVR_ATmega2560__)
            return ATmega2560;
    #elif defined(__AVR_ATmega32U4__)
            return ATmega32U4;
    #elif defined(__SAM3X8E__)
            return AT91SAM3X8E;
    #elif defined(__SAMD21G18A__)
            return ATSAMD21G18;
    
    // ATtiny
    #elif defined(__AVR_ATtiny25__)
            return ATtiny25;
    #elif defined(__AVR_ATtiny45__)
            return ATtiny45;
    #elif defined(__AVR_ATtiny85__)
            return ATtiny85;
    #elif defined(__AVR_ATtiny24__)
            return ATtiny24;
    #elif defined(__AVR_ATtiny44__)
            return ATtiny44;
    #elif defined(__AVR_ATtiny84__)
            return ATtiny84;
    #elif defined(__AVR_ATtiny2313__)
            return ATtiny2313;
    #elif defined(__AVR_ATtiny4313__)
            return ATtiny4313;
    #endif
    #if defined(__MSP430F5529__)
            return MSP430F5529;
    #endif
    #endif
    return CPU_UNKNOWN;
}

Device ArduinoWhoami::getDeviceType(){
    #ifndef INFO_DEVICE
        #if   defined(ENERGIA)
            return  Energia____;        

        #elif defined(LINUX)
            return  Linux____;

        #elif defined(SPARK) || defined(PARTICLE)
            #if PLATFORM_ID==0
                return  ParticleCore____;
            #elif PLATFORM_ID==6
                return  ParticlePhoton____;
            #elif PLATFORM_ID==8
                return  ParticleP1____;
            #elif PLATFORM_ID==9
                return  ParticleEthernet____;
            #elif PLATFORM_ID==10
                return  ParticleElectron____;
            #elif PLATFORM_ID==82
                return  DigistumpOak____;
            #elif PLATFORM_ID==88
                return  RedBearDuo____;
            #elif PLATFORM_ID==103
                return  Bluz____;
            #else
            #warning "Cannot detect board type"
                return  Particle____;
            #endif

        #elif defined(MBED_LIBRARY_VERSION)
            return  MBED____;

        #elif defined(ARDUINO) && defined(MPIDE)
            #define NO_YIELD

            #if   defined(_BOARD_UNO_)
                return  chipKITUno32____;
            #else
                return  chipKIT__;
            #endif

        #elif defined(ARDUINO)

            /* ArduinoAVR */
            #if   defined(ARDUINO_AVR_NANO)
                return  ArduinoNano__;
            #elif defined(ARDUINO_AVR_UNO) || defined(ARDUINO_AVR_DUEMILANOVE)
                return  ArduinoUno__;
            #elif defined(ARDUINO_AVR_YUN)
                return  ArduinoYun__;
            #elif defined(ARDUINO_AVR_MINI)
                return  ArduinoMini__;
            #elif defined(ARDUINO_AVR_ETHERNET)
                return  ArduinoEthernet__;
            #elif defined(ARDUINO_AVR_FIO)
                return  ArduinoFio__;
            #elif defined(ARDUINO_AVR_BT)
                return  ArduinoBT__;
            #elif defined(ARDUINO_AVR_PRO)
                return  ArduinoPro__;
            #elif defined(ARDUINO_AVR_NG)
                return  ArduinoNG__;
            #elif defined(ARDUINO_AVR_GEMMA)
                return  ArduinoGemma__;
            #elif defined(ARDUINO_AVR_MEGA) || defined(ARDUINO_AVR_MEGA2560)
                return  ArduinoMega__;
            #elif defined(ARDUINO_AVR_ADK)
                return  ArduinoMegaADK__;
            #elif defined(ARDUINO_AVR_LEONARDO)
                return  ArduinoLeonardo__;
            #elif defined(ARDUINO_AVR_MICRO)
                return  ArduinoMicro__;
            #elif defined(ARDUINO_AVR_ESPLORA)
                return  ArduinoEsplora__;
            #elif defined(ARDUINO_AVR_LILYPAD)
                return  Lilypad__;
            #elif defined(ARDUINO_AVR_LILYPAD_USB)
                return  LilypadUSB__;
            #elif defined(ARDUINO_AVR_ROBOT_MOTOR)
                return  RobotMotor__;
            #elif defined(ARDUINO_AVR_ROBOT_CONTROL)
                return  RobotControl__;

            /* ArduinoSAM/SAMD */
            #elif defined(ARDUINO_SAM_DUE)
                return  ArduinoDue__;
            #elif defined(ARDUINO_SAMD_ZERO)
                return  ArduinoZero__;
            #elif defined(ARDUINO_SAMD_MKR1000)
                return  ArduinoMKR1000__;

            /* Intel */
            #elif defined(ARDUINO_GALILEO)
                return  Galileo__;
            #elif defined(ARDUINO_GALILEOGEN2)
                return  GalileoGen2__;
            #elif defined(ARDUINO_EDISON)
                return  Edison__;
            #elif defined(ARDUINO_ARCH_ARC32) // TODO
                return  Arduino101__;

            /* Konekt */
            #elif defined(ARDUINO_DASH)
                return  Dash__;
            #elif defined(ARDUINO_DASHPRO)
                return  DashPro__;

            /* Red Bear Lab */
            #elif defined(ARDUINO_RedBear_Duo)
                return  RedBearDuo__;
            #elif defined(ARDUINO_BLEND)
                return  Blend__;
            #elif defined(ARDUINO_BLEND_MICRO_8MHZ) || defined(ARDUINO_BLEND_MICRO_16MHZ)
                return  BlendMicro__;
            #elif defined(ARDUINO_RBL_nRF51822)
                return  BLENano__;

            /* ESP8266 */
            #elif defined(ARDUINO_ESP8266_ESP01)
                return  ESP8266__;
            #elif defined(ARDUINO_ESP8266_ESP12)
                return  ESP12__;
            #elif defined(ARDUINO_ESP8266_NODEMCU)
                return  NodeMCU__;
            #elif defined(ARDUINO_ESP8266_THING)
                return  EspThing__;
            #elif defined(ARDUINO_ESP8266_THING_DEV)
                return  EspThingDev__;

            /* Digistump */
            #elif defined(ARDUINO_ESP8266_OAK)
                return  Oak__;
            #elif defined(ARDUINO_AVR_DIGISPARK)
                return  Digispark__;
            #elif defined(ARDUINO_AVR_DIGISPARKPRO)
                return  DigisparkPro__;

            /* Microduino */
            #elif defined(ARDUINO_AVR_USB)
                return  CoreUSB__;
            #elif defined(ARDUINO_AVR_PLUS)
                return  CorePlus__;
            #elif defined(ARDUINO_AVR_RF)
                return  CoreRF__;

            /* Wildfire */
            #elif defined(ARDUINO_WILDFIRE_V2)
                return  WildfireV2__;
            #elif defined(ARDUINO_WILDFIRE_V3)
                return  WildfireV3__;
            #elif defined(ARDUINO_WILDFIRE_V4)
                return  WildfireV4__;

            /* Simblee */
            #elif defined(__Simblee__) // TODO: ARDUINO_SIMBLEE bug?
                return  Simblee__;

            #else
            #warning "Cannot detect board type, set Arduino"
                return  Arduino__;
            #endif

        #endif
    #endif


}