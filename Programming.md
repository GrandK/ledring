# How to program the LEDring #


## Step 1 - Set up the USB programmer ##

  * Download and install drivers need to be installed for your USB programmer.
  * This will not needed if you have already a programmer before - e.g. for a Multiwii board.

## Step 2 Modify the Arduino environment ##

  * LED Ring v3 uses Opti bootloader so Arduino IDE may need to be modified to allow programming. The following should work...
  * Use Arduino v1.0 or greater.
  * Add the contents of "Append to Boards.txt" into end of boards.txt which you will find in your arduino folder ...\hardware\arduino\boards.txt.
  * Restart Arduino IDE and you should see the LED board listed as a board option. Select this before programming.
  * Note - if you have multiple IDE's installed, you will need to amend the correct boards.txt file. If the board does not show this is probably why.

## Step 3 - Upload to the LEDring board ##

  * Connect the USB programmer to the LEDring.
  * Select the new board listed from Tools-->board-->MultiWiiCopter LEDring v3.
  * Open the LEDring.PDE sketch and click upload.
  * Don't forget to set board back to program other boards like Multiwii !!