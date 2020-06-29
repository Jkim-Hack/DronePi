#ifdef __MACH__
#include "/Users/jkim/WiringPi/wiringPi/wiringPi.h"
#else
#include <wiringPi.h>
#endif

int main(void) {
  wiringPiSetup();
  pinMode(0, OUTPUT);
  pullUpDnControl(0, PUD_UP);

  while(1) {
    pwmWrite(0, HIGH);
  }

  return 0;
}
