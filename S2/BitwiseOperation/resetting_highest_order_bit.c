#include <stdint.h>
uint32_t reset_highestorder_strong_bit(uint32_t x)
{
     int i;
     int filter = 0b10000000000000000000000000000000;
     for (i = 0; i <= 32; i++) {
          if ((x & filter) != 0)
          {
               x = x & ~filter;
               return x >> i;
         }
        x = x << 1;
     }
     return x;
}
