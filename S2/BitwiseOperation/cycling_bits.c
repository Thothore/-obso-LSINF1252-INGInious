uint32_t cycle_bits(uint32_t x, uint8_t n)
{
     return  (x << n) | (x >> (32-n));
}
