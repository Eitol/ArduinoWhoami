#ifndef DeviceType_h
#define DeviceType_h

enum Device
{
    // ENERGIA
    Energia__,

    // LINUX
    Linux__,

    // SPARK PARTICLE
    ParticleCore__,
    ParticlePhoton__,
    ParticleP1__,
    ParticleEthernet__,
    ParticleElectron__,
    DigistumpOak__,
    Bluz__,
    Particle__,

    // MBED
    MBED__,

    // MPIDE
    chipKITUno32__,
    chipKIT__,

    // Arduino AVR
    ArduinoNano__,
    ArduinoUno__,
    ArduinoYun__,
    ArduinoYMini__,
    ArduinoEthernet__,
    ArduinoFio__,
    ArduinoBT__,
    ArduinoPro__,
    ArduinoNG__,
    ArduinoGemma__,
    ArduinoMega__,
    ArduinoMegaADK__,
    ArduinoLeonardo__,
    ArduinoMicro__,
    ArduinoEsplora__,
    Lilypad__,
    LilypadUSB__,
    RobotMotor__,
    RobotControl__,

    /* Arduino SAM/SAMD */
    ArduinoDue__,
    ArduinoZero__,
    ArduinoMKR1000__,

    /* Intel */
    Galileo__,
    GalileoGen2__,
    Edison__,
    Arduino101__,

    /* Konekt */
    Dash__,
    DashPro__,

    /* Red Bear Lab */
    RedBearDuo__,
    Blend__,
    BLENano__,

    /* ESP8266 */
    ESP8266__,
    ESP12__,
    NodeMCU__,
    EspThing__,
    EspThingDev__,

    /* Digistump */
    Oak__,
    Digispark__,
    DigisparkPro__,

    /* Microduino */
    CoreUSB__,
    CorePlus__, //Core+
    CoreRF__,

    /* Wildfire */
    WildfireV2__,
    WildfireV3__,
    WildfireV4__,

    /* Simblee */
    Simblee__,
    UnknownArduino__
};

#endif