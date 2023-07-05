#include <stdio.h>

int main(void)
{
  unsigned int a = 0x11223344;
  char i;
  unsigned char* ptr;
  for(i = 0; i < 4; ++i)
  {
    ptr = ((unsigned char*)&a + i);
    printf("byte %d number a = %x\n",(i + 1), *ptr);
  }

  printf("\nchange the number\n");
  ptr = ((unsigned char*)&a + 2);
  (*ptr) = 0xDD;
  for(i = 0; i < 4; ++i)
  {
    ptr = ((unsigned char*)&a + i);
    printf("byte %d number a = %x\n",(i + 1), *ptr);
  }

  return 0;
}
