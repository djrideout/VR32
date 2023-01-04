#include <stdio.h>

#include "mem.h"
#include "cart.h"

unsigned int mem[0x08000000] = {0};

unsigned int mem_read(unsigned int addr) {
  if (addr >= 0x04000000 && addr <= 0x04FFFFFF) {
    return cart[addr & ~0x04000000];
  } else if (addr >= 0x08000000 && addr <= 0xFFFFFFFF) {
    return mem[addr & ~0xFF000000];
  } else {
    return mem[addr];
  }
}

void mem_write(unsigned int addr, unsigned int val) {
  mem[addr] = val;
}
