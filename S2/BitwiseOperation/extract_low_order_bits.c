#include <stdint.h>
uint8_t get_4_rightmost_bits(uint32_t x)
{
     return (uint8_t) (((x << 28) & 0b11110000000000000000000000000000) >> 28);
}
