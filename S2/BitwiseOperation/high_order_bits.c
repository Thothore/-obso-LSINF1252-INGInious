#include <stdint.h>
uint8_t get_3_leftmost_bits(uint32_t x)
{
     return (uint8_t) ((x >> 29) & 0b00000000000000000000000000000111);
}
