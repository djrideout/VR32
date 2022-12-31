#include <stdio.h>

#include "vb.h"
#include "cpu.h"

struct CPU cpu = {
  .pc = 0xFFFFFFF0,
  .reg = {0},
  .sysreg = {0}
};

void cpu_reset() {
  cpu.pc = 0xFFFFFFF0;
  for (int i = 0; i < 32; i++) {
    cpu.reg[i] = 0;
    cpu.sysreg[i] = 0;
  }
}
