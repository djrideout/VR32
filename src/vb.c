#include <stdio.h>

#include "vb.h"
#include "cpu.h"

struct VirtualBoy vb = {
  .number = 1
};

void vb_reset() {
  cpu_reset();
}
