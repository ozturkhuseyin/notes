// refer to https://stackoverflow.com/questions/252552/why-do-we-need-c-unions
#include "stdio.h"

typedef union
{
  struct
  {
	unsigned char b1:1;
	unsigned char b2:1;
	unsigned char b3:1;
	unsigned char b4:1;
	unsigned char reserved:4;
  } bits;
  unsigned char byte;
} HW_RegisterBits;
HW_RegisterBits reg;

int
main ()
{
  reg.byte = 0xAB;
  printf ("%x\n", reg.bits.b1);
  printf ("%x\n", reg.bits.b2);
  printf ("%x\n", reg.bits.b3);
  printf ("%x\n", reg.bits.b4);
  printf ("%x\n", reg.bits.reserved);
}
