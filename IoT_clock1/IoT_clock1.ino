#include <functions.h>
#include <my_library.h>
#include "src/my_library_test/my_library_test.h"

void setup() {
  Serial.begin(115200);

  int result = addTwoInts(4, 3);
  addTwoIntsad(3, 4);
}

void loop() {
  for (int i; i < 10 ; i++) {
    fun1(i);
  }
}
