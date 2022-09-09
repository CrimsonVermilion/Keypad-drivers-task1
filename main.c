#include "keypad.h"
#include <stdio.h>

char reading = 0;


int main()
{
  KeyPad_Init();
  while(1)
  {
     reading = KeyPad_Read();
    printf("%c",reading);
  }
}
