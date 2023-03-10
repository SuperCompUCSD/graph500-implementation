// this libraries simply parses /proc/cpu info to get total cores, 
// cores per socket and total sockets
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <regex.h>
#include <string.h>

#ifndef CORE_H_
#define CORE_H_

typedef struct{
	int32_t cores_per_socket, 
			total_sockets, 
			total_cores;
} cpu_info;

cpu_info *get_cpu_info();

#endif
