/**
 * ex4.c
 *
 * Kuzma Leshakov
 * k.leshakov@innopolis.ru
 *
 * task: Write a C program that runs for 10 seconds. Every second it allocates 10 MB of memory, fills it with zeros, prints memory usage with getrusage() function and sleeps for 1 second.
 */

#include <string.h>
#include <stdlib.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int time = 0;
	int *array;
	struct rusage usage;

	while(time < 10)
	{
	int *array = malloc(1048576);
	memset( array, 0, 1048576);
	getrusage(RUSAGE_SELF,  &usage);
	printf("%li\n", usage.ru_maxrss); 
	time++;
	sleep(1);
	}	
}