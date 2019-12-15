#include <Blink.h>
Blink myblink(4, 5);//Blink XXXXX(led1 pin,led2 pin);

void setup() {

  myblink.delaytoBLINK1(100);//delay for blink1.
  myblink.delaytoBLINK2(500);//delay for blink2.

}

void loop() {

  for (int i = 0; i < 10; i++) {
    myblink.BLINK1();
  }
  for (int i = 0; i < 10; i++) {
    myblink.BLINK2();
  }

}
