#include <stdio.h>

#include "vb.h"
#include "cpu.h"

enum SysReg {
  EIPC = 0,
  EIPSW = 1,
  FEPC = 2,
  FEPSW = 3,
  ECR = 4,
  PSW = 5,
  PIR = 6,
  TKCW = 7,
  CHCW = 24,
  ADTRE = 25,
  UNKNOWN_29 = 29,
  UNKNOWN_30 = 30,
  ABS = 31 // official name unknown, but calculates the absolute value of the number written to it
};

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
  cpu.sysreg[ECR] = 0x0000FFF0;
  cpu.sysreg[PSW] = 0x00008000;
}
