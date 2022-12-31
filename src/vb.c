#include <stdio.h>

#include "cpu.h"

void vb_thing() {
  printf("\x1b[16;19HPrinted from VB!");
  cpu_thing();
}
