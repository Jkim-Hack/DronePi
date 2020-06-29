#include <wiringPi.h>

int main(void) {
  wiringPiSetup();
  pinMode(0, OUTPUT);
  pullUpDnControl(0, PUD_UP);

  while(1) {
    pwmWrite(0, HIGH);
  }

  return 0;
}
