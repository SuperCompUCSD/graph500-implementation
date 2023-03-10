#include <stdint.h>
#include <stdlib.h>

//todo: add case compile time statements to check for size of int max
//either that or do some substitution with the entire xxhash header file

#ifndef XORSHIFT_H_
#define XORSHIFT_H_

 uint32_t xorshift32(const uint32_t seed);
 uint64_t xorshift64(const uint64_t seed);
 uintmax_t xorshiftmax(const uintmax_t seed);

#endif
