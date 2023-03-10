#include <stdint.h>
#include <stdlib.h>

//todo: add case compile time statements to check for size of int max
//either that or do some substitution with the entire xxhash header file

#ifndef XORSHIFT_H_
#define XORSHIFT_H_

typedef struct  {
	uint32_t state;
} xorshift32_state;

typedef struct  {
	uint64_t state;
} xorshift64_state;

typedef struct  {
	uintmax_t state;
} xorshiftmax_state;

xorshift32_state* sxorshift32(uint32_t seed);
xorshift64_state* sxorshift64(uint64_t seed);
xorshiftmax_state* sxorshiftmax(uintmax_t seed);

uint32_t xorshift32(xorshift32_state *state);
uint64_t xorshift64(xorshift64_state *state);
uintmax_t xorshiftmax(xorshiftmax_state *state);

#endif
