This is carried out by editing the config section in the Ledring.ino sketch

# How to configure the LEDring #


## Step 1 - Choose the mode of operation ##

  * Standalone       - to use standalone. Select the LED flash sequence from push button switch.
  * MultiWii\_I2C\_v2  - to use Multiwii enhanced LEDring functionality. (standard in 2.2 dev)
  * MultiWii\_I2C\_v1  - to use standard Multiwii 2.0/2.1 LED functionality.

## Step 2 - Choose the board type environment ##

  * LEDBOARDv2 - pre and early 2011 hardware.
  * LEDBOARDv3 - released late 2011.


## Step 3 - Set the I2C configuration (MultiWii mode only) ##

  * I2C\_address - option to select alternative to avoid clash.
  * INTERNAL\_I2C\_PULLUPS - for specific hardware configurations.

## Step 4 - Set the MAG direction ##

  * reverse\_mag - option for inverted boards (underside of your copter)