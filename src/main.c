#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>
#include <time.h>
#include <pthread.h>
#include <mpi.h>

#include "xorshift.h" //random num gen
#include "core.h" //parses /proc/cpuinfo



int32_t main(){
	printf("fijervs\n");
	cpu_info *info = get_cpu_info();

	printf("cores/socket: %d,sockets: %d, cores: %d\n", 
			info->cores_per_socket, 
			info->total_sockets, 
			info->total_cores);
	
	int32_t numThreads = info->total_cores;

	free(info);
	xorshift32(10);

	for(int i = 0; i<10; i++){
		printf("%d\n", xorshift32(0));
	}

	

	// generate edge list
	//
	// construct graph from edge list (kernel 1) (timed)
	//
	// rendomly sample 64 unique search keys of deg(1) no self loops
	//
	// for each key
	// 	compute parent array (kernel 2) (timed)
	// 	validate parent array is correct bfs search tree
	//
	// for each key
	// 	compute parent array and distence array (kernel 3) (timed)
	// 	validate parent array/distance vector is correct SSSP search tree
	//
	// compute & output performance


	return 0;
}
