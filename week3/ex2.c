/**
 * ex2.c
 *
 * Kuzma Leshakov
 * k.leshakov@innopolis.ru
 *
 * Task: Write an infinite loop that sleeps for 1 second and then increments the counter on each iteration. Every 10 iterations print “Parent ” + the value of the counter and fork a new process. Within the child process simply print “Child” + the value of the counter variable and exit
 */
 
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
    int counter = 0;
    while(1)
    {
        sleep(1);
        counter++;
        
        if (counter % 10 == 0)
        {
            printf("Parent %d\n", counter);
            pid_t PID = fork();
            
            if (PID == 0)
            {
                printf("Child %d\n", counter);
                exit(0);
            }
            
        }
        

    }
    
}