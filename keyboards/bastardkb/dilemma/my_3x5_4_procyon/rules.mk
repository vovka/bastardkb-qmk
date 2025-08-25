SERIAL_DRIVER = vendor
I2C_DRIVER_REQUIRED = yes
DIGITIZER_DRIVER = maxtouch
POINTING_DEVICE_DRIVER = digitizer
# POINTING_DEVICE_ENABLE = yes # find it enabled in keyboard.json: `"pointing_device": true`

MAXTOUCH_DEBUG = yes
# CONSOLE_ENABLE = yes # find it enabled in keyboard.json: `"console": true`

MCU = RP2040 # find it enabled in keyboard.json: `"processor": "RP2040"`
BOOTLOADER = rp2040 # find it enabled in keyboard.json: `"bootloader": "rp2040"`
PLATFORM = chibios

TRI_LAYER_ENABLE = yes
# SPLIT_KEYBOARD = yes # find it enabled in keyboard.json: `"split.enabled": true,`
EE_HANDS = yes
# ENCODER_ENABLE = yes # find it enabled in keyboard.json: `"encoder.enabled" : true`
ENCODER_MAP_ENABLE = yes
