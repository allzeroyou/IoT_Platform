#include <stdio.h>
#include <wiringPi.h>

#define PIN_NUM 4
#define PIN_NUM 5
#define PIN_NUM 26
#define PIN_NUM 27
#define DELAY 30

int main(void)
{
  int pinNum[4]={4, 5, 26, 27};

  if(wiringPiSetup() == -1){
    return -1;
  }
  for(int i=0; i<4; i++)
    pinMode(pinNum[i], OUTPUT);

  while(1){
    for(int i=1; i<8; i++){
      if(i/2 != 0){
        digitalWrite(pinNum[i/2],1);
        delay(DELAY);
        digitalWrite(pinNuM[i/2],0);
        delay(DELAY);
      }
      else{
        digitalWrite(pinNum[i/2-1],1);
        digitalWrite(pinNum[i/2, 1]);
        delay(DELAY);
        digitalWrite(pinNum[i/2-1, 0]);
        digitalWrite(pinNum[i/2, 0]);
        delay(DELAY);
      }
    }
  }
  
}