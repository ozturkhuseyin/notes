// refer to https://stackoverflow.com/questions/252552/why-do-we-need-c-unions
#include "stdio.h"

typedef union
{
  struct
  {
	unsigned char byte1;
	unsigned char byte2;
	unsigned char byte3;
	unsigned char byte4;
  } bytes;
  unsigned int dword;
} HW_Register;

HW_Register reg;

int
main ()
{
  reg.dword = 0x12345678;
  printf ("%x\n", reg.bytes.byte1);
  printf ("%x\n", reg.bytes.byte2);
  printf ("%x\n", reg.bytes.byte3);
  printf ("%x\n", reg.bytes.byte4);
}
