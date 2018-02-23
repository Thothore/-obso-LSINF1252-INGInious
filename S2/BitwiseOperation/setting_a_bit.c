#include <stdint.h>
#include <stdbool.h>
/*
 * @pre 0<= pos < 64
 */
uint64_t set_bit(uint64_t x, int pos, bool value)
{
     int filter = 0b0000000000000000000000000000000000000000000000000000000000000001 << pos;
     int zero = 0b1111111111111111111111111111111111111111111111111111111111111110 << pos;
     if (value == 0)
     {
         return x & zero;
     }
     return x | filter;
}
