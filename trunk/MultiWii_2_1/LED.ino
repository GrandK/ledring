#if defined(LED_RING)

#define LED_RING_ADDRESS 0xDA //8 bits  -- my initial :)

void i2CLedRingState() {
  uint8_t b[10];

  b[0]='M'; // MultiwII mode
  if (f.ARMED) { // Motors running = flying
    if(!f.ACC_MODE){ //ACRO
      b[0]= 'x';
    }
    else if(f.GPS_HOME_MODE){ //RTH
      b[0]= 'w';
    }   
    else if(f.GPS_HOLD_MODE){//Position Hold
      b[0]= 'v';
    } 
    else {
      b[0]= 'u'; // stable mode
    }  
    i2c_rep_start(LED_RING_ADDRESS);
    i2c_write(b[0]);
    i2c_stop();  
  } 
  else if (!f.ACC_CALIBRATED) { // Multiwii not stable or uncalibrated 
    b[0]= 't';
    i2c_rep_start(LED_RING_ADDRESS);
    i2c_write(b[0]);
    i2c_stop();   
  }
  else { // Motors not running = on the ground
    b[0]= 's';
    if (f.ACC_MODE) b[1]=1; 
    else b[1]= 0;                  
    if (f.BARO_MODE) b[2]=1; 
    else b[2]= 0;                  
    if (f.MAG_MODE) b[3]=1; 
    else b[3]= 0;                  
    if (rcOptions[BOXGPSHOME]) b[4]=2;
    else if (rcOptions[BOXGPSHOLD]) b[4]=1;
    else b[4]=0;
    b[5]=(180-heading)/2; // 1 unit = 2 degrees;
    b[6]=GPS_numSat;                                      
    i2c_rep_start(LED_RING_ADDRESS);
    for(uint8_t i=0;i<7;i++){
      i2c_write(b[i]);
    }
    i2c_stop();
  }
#if defined (VBAT)
  if (vbat<VBATLEVEL1_3S){ // Uh oh - battery low
    i2c_rep_start(LED_RING_ADDRESS);
    i2c_write('r');
    i2c_stop();   
  }
# endif
}

void blinkLedRing() {
  uint8_t b[3];
  b[0]='g';
  b[1]= 10;
  b[2]= 10;
  i2c_rep_start(LED_RING_ADDRESS);
  for(uint8_t i=0;i<3;i++)
    i2c_write(b[i]);
  i2c_stop();
}

#endif












