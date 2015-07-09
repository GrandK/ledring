# About LEDring #

LEDring is a software primarily designed to provide additional visual functionality to MultiWii multi-rotor controllers and RC aircraft. Or just some cool flashing lights!

It provides an indicator of key controls status - such as being in ACRO / autolevel or GPS controlled modes.
Or it can simply provide a preset Flashing LED layout such as aircraft navigation lights.

Credits:
  * Original implementation by Alexander Dubus
  * Enhanced features by Gary Moscardini - Shikra

## List of supported features: ##

  * MultiWii multirotor controller support.

  * Standalone mode - select the flashing routines you want from a press button.

  * Preset aircraft navigation layouts.

## List of planned features: ##

  * PWM controlled - support for 2/3 position RC tx switch via rx channel


---


# Operational modes #

Mode 0 - Standalone - set LED sequence flash mode via Switch 1.
> - Switch S1 - Toggles between various flashing sequences when run standalone without I2C connection.
> - Switch S2 - Toggles on/off
> - Modes / flash sequence remembered between restarts
Mode 1 - MultiWii - LEDs are controlled by MultiWii controller via I2C commands

---


# LED sequences #

## Multiwii connected Mode: ##
### Motors on ###
  * ACRO flying - Cool Flashing MultiWiicopter Navi lights / strobe
  * HORIZON flying - Static MultiWiicopter Navigation lights. Position for orientation.
  * LEVEL flying - Static MultiWiicopter Navigation lights. Position for orientation.
  * GPS position hold - Static all Blue
  * GPS RTH - Flashing all Blue
  * Battery level low - Fast flashing all Red

### Motors off ###
  * Unstable position warning - Fast Green flash
  * Acc not calibrated - Fast Green flash
  * Acro mode with BARO/MAG disabled - cool flashing MultiWiicopter Navi lights / strobe

### Motors off - BARO/MAG enabled ###
  * ACRO mode - base color = RED

  * LEVEL/ANGLE mode - base color = GREEN
  * HORIZON mode - base color = every 2nd LED GREEN
    * IF MAG = North direction indicated by single Blue
    * IF BARO = flash every other blue

### Motors off - GPS RTH/POSHOLD enabled ###
  * base color = WHITE
  * no sats = circling RED LED on WHITE (NOT ready to fly)
  * sats < 5 = flashing RED count of number of sats (NOT ready to fly)
  * sats 5 pr more = steady RED count of number of sats (ready to fly)
    * IF MAG = North direction indicated by single Blue
    * IF BARO = non sats LED are white


## Standalone Mode: ##
  * Sequence 0 - Static Red
  * Sequence 1 - Static Green
  * Sequence 2 - Static Blue
  * Sequence 3 - Flashing Red
  * Sequence 4 - Flashing Green
  * Sequence 5 - Flashing Blue
  * Sequence 6 - Fast Red flash
  * Sequence 7 - Fast Green flash
  * Sequence 8 - Fast Blue flash
  * Sequence 10 - Standard Navigation lights. Red left, Green right, white rear, flashing red flashing white strobe
  * Sequence 11 - MultiWiccopter Navigation lights. Red left, Green right, white rear, all flashing red / flashing white strobe
  * Sequence 12 - Flashing Red/Green. Red facing forward for orientation
  * Sequence 13 - Static Red/Green. Red facing forward for orientation
  * Sequence 14 - MultiWiiCopter Andromeda. Blue forward/White Sides/Red rear for orientation
  * Sequence 15 - Circling effect. Red circling LED on white
  * Sequence 16 - Circling effect. Green circling LED on white
  * Sequence 17 - Circling effect. Blue circling LED on white
  * Sequence 20 - Alexander the great effect 1
  * Sequence 21 - Alexander the great effect 2
  * Sequence 22 - Random


---

# Instructions #
http://code.google.com/p/ledring/w/list

---

# Where to purchase #

LEDrings can be purchased at a number of suppliers. Proven compatible LEDrings can be found at:

> [MultiWiicopter](http://www.multiwiicopter.com).