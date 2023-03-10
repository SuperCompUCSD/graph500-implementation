#include "xorshift.h"

xorshift32_state* sxorshift32(uint32_t seed){
	xorshift32_state* state = (xorshift32_state*) malloc(sizeof(xorshift32_state));
	state->state=seed;
	return state; 
}

uint32_t xorshift32(xorshift32_state* state){
	uint32_t x = state->state;
	x ^= x << 13;
	x ^= x >> 17;
	x ^= x << 5;
	return state->state=x;
}

xorshift64_state* sxorshift64(uint64_t seed){
	xorshift64_state* state = (xorshift64_state*) malloc(sizeof(xorshift64_state));
	state->state=seed;
	return state; 
}

uint64_t xorshift64(xorshift64_state* state){
	uint64_t x = state->state;
	x ^= x << 13;
	x ^= x >> 17;
	x ^= x << 5;
	return state->state=x;
}

xorshiftmax_state* sxorshiftmax(uintmax_t seed){
	xorshiftmax_state* state = (xorshiftmax_state*) malloc(sizeof(xorshiftmax_state));
	state->state=seed;
	return state; 
}

uintmax_t xorshiftmax(xorshiftmax_state* state){
	uintmax_t x = state->state;
	x ^= x << 13;
	x ^= x >> 17;
	x ^= x << 5;
	return state->state=x;
}
