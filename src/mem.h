#ifndef MEM_H
#define MEM_H

extern unsigned int mem[0x08000000];

unsigned int mem_read(unsigned int addr);
void mem_write(unsigned int addr, unsigned int val);

#endif /* MEM_H */
