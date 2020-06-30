#ifdef __MACH__
#include "/Users/jkim/WiringPi/wiringPi/wiringPi.h"
#else
#include <wiringPi.h>
#endif

int main(void) {
  wiringPiSetup();
  wiringPiSetupPhys();
  pullUpDnControl(0, PUD_UP);
  int pin = physPinToGpio(17);
  pinMode(0, OUTPUT);
  while(1) {
    digitalWrite(pin, LOW);
  }

  return 0;
}
