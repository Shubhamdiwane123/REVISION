#include <stdio.h>
#define swapNibbles(x) ( (x & 0x0F)<<4 | (x & 0xF0)>>4)  
int main()
{
   unsigned char x=100;
    printf("%u", swapNibbles(x));
    return 0;
}
   
