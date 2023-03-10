#include "xorshift.h"

uint32_t xorshift32(const uint32_t seed){
	static uint32_t state = 1;
	state += seed;
	state ^= state << 13;
	state ^= state >> 17;
	state ^= state << 5;
	return state;
}
uint64_t xorshift64(const uint64_t seed){
	static uint64_t state = 1;
	state += seed;
	state ^= state << 13;
	state ^= state >> 17;
	state ^= state << 5;
	return state;
}

uintmax_t xorshiftmax(const uintmax_t seed){
	static uintmax_t state = 1;
	state += seed;
	state ^= state << 13;
	state ^= state >> 17;
	state ^= state << 5;
	return state;
}
