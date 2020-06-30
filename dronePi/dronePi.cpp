#ifdef __MACH__
#include "/Users/jkim/WiringPi/wiringPi/wiringPi.h"
#else
#include <wiringPi.h>
#endif

int main(void) {
  wiringPiSetup();
  pinMode(0, OUTPUT);

  while(1) {
    digitalWrite(0, LOW);
  }

  return 0;
}
