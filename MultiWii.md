# Configuring MultiWii for LEDring - Supported releases #


---

## MultiWii 2.1 ##

### option 1 - standard MultiWii ledring functionality ###
Find and enable //#define LED\_RING in config.h
Upload the new sketch to your MultiWii controller

Ensure the following is set in the sketch uploaded to the LEDring board:
```
//#define MultiWii_I2C_v2
#define MultiWii_I2C_v1
```


### option 2 - enhanced MultiWii ledring functionality ###
Replace MultiWii led.ino with alternative led.ino from downloads or via source-->browse-->trunk-->MultiWii...
Find and enable //#define LED\_RING in config.h
Upload the new sketch to your MultiWii controller

Ensure the following is set in the sketch uploaded to the LEDring board:
```
#define MultiWii_I2C_v2
// #define MultiWii_I2C_v1 
```


---

## MultiWii 2.0 ##

### standard MultiWii ledring functionality ###
Find and enable //#define LED\_RING in config.h
Upload the new sketch to your MultiWii controller

Ensure the following is set in the sketch uploaded to the LEDring board:
```
//#define MultiWii_I2C_v2
#define MultiWii_I2C_v1
```


---

## Pre MultiWii 2.0 ##
Not supported

---

## DEVELOPMENT releases ##

---

## MultiWii 2.2 dev releases ##

### option 1 - standard MultiWii ledring functionality ###
Find and enable //#define LED\_RING in config.h
Upload the new sketch to your MultiWii controller

Ensure the following is set in the sketch uploaded to the LEDring board:
```
//#define MultiWii_I2C_v2
#define MultiWii_I2C_v1
```


### option 2 - enhanced MultiWii ledring functionality ###
Replace MultiWii led.ino with alternative led.ino from downloads or via source-->browse-->trunk-->MultiWii...
Find and enable //#define LED\_RING in config.h
Upload the new sketch to your MultiWii controller

Ensure the following is set in the sketch uploaded to the LEDring board:
```
#define MultiWii_I2C_v2
// #define MultiWii_I2C_v1 
```