#include <stdio.h>

#include "vb.h"
#include "cpu.h"

struct VirtualBoy vb = {
  .number = 1
};

void vb_thing() {
  printf("\x1b[16;19HPrinted from VB!");
  cpu_thing();
}

void vb_init() {
  vb.number = 4;
  cpu_init();
}
