#include "io.h"

int print() 
{
  char va;
  __ASM {
    PUSH offset va 
    CALL DWORD ptr printf 
    ADD esp, 4 
    LEA eax, [y] 
    PUSH eax 
    LEA ecx, [x] 
    PUSH ecx 
  }
  
  return 0;
  
}
