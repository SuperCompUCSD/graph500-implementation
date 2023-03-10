#include "core.h"

cpu_info *get_cpu_info(){
	FILE *fp = fopen("/proc/cpuinfo", "r");	
	char buff[255], buff2[4];
	int32_t cores_per_socket = 0, sockets = 0;

	regex_t cpu_regex,socket_regex;
	regcomp( &cpu_regex, "cpu cores", 0);
	regcomp( &socket_regex, "physical id", 0);

	
	while (fgets(buff, 255, fp)){
		if(!regexec( &cpu_regex, buff, 0, NULL, 0)) { 
		strncpy(buff2, buff+12, 4);
		cores_per_socket = atoi(buff2);
		}
		if(!regexec( &socket_regex, buff, 0, NULL, 0)) { 
		strncpy(buff2, buff+13, 4);
		sockets = (atoi(buff2) > sockets)? atoi(buff2) : sockets;
		}
	}
	sockets++;

	// cleanup
	fclose(fp);
	regfree(&cpu_regex);
	regfree(&socket_regex);
	
	cpu_info *cp = malloc(sizeof(cpu_info));
	cp->cores_per_socket = cores_per_socket;
	cp->total_sockets = sockets;
	cp->total_cores = cores_per_socket*sockets;

	return cp;
}
