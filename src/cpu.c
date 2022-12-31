#include <stdio.h>

#include "vb.h"
#include "cpu.h"

struct CPU cpu = {
  .number = 2
};

void cpu_thing() {
  printf("\x1b[17;19HPrinted from CPU!");
}

void cpu_init() {
  cpu.number = 5;
  printf("\x1b[13;19HVB Init! %d", vb.number);
  printf("\x1b[14;19HCPU Init! %d", cpu.number);
}
