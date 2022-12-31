#ifndef CPU_H
#define CPU_H

struct CPU {
  int number;
};
extern struct CPU cpu;

void cpu_thing();
void cpu_init();

#endif /* CPU_H */
