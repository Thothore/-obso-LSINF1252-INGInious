#include <stdint.h>
uint8_t nbits(uint32_t n)
{
     int i;
     int counter = 0;
     int filter = 0b00000000000000000000000000000001;
     for (i = 0; i < 32; i++)
     {
         if (n & filter)
         {
             counter++;
         }
         filter = filter << 1;
     }
     return counter;
}
