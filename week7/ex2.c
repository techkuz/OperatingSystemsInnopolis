/**
 * ex2.c
 *
 * Kuzma Leshakov
 * k.leshakov@innopolis.ru
 *
 * task: Write a C program that runs for 10 seconds. Every second it allocates 10 MB of memory, fills it with zeros and sleeps for 1 second. Compile and run the program in the background (./ex2 &) and run &vmstat 1 at the same time. Observe what happens to the memory. Pay attention to si and so fields. Hint: use memset(ptr, value, size) to fill the allocated memory
 */

#include <string.h>
#include <stdlib.h>

int main(void)
{
	int time = 0;
	int *array;

	while(time < 10)
	{
	int *array = malloc(1048576);
	memset( array, 0, 1048576);
	time++;
	sleep(1);
	}	
}