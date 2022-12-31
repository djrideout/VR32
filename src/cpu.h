#ifndef CPU_H
#define CPU_H

struct CPU {
  unsigned int pc;
  unsigned int reg[32];
  unsigned int sysreg[32];
};
extern struct CPU cpu;

void cpu_reset();

#endif /* CPU_H */
