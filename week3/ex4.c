/**
 * ex4.c
 *
 * Kuzma Leshakov
 * k.leshakov@innopolis.ru
 *
 * Task: Write a program that creates 2 processes. The second process should be created via fork(). After the fork, the child should execute (exec*) the binary /bin/ls. The parent process should print a hello world message after forking. How many hello world messages will be printed?
 */
 
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
    pid_t PID = fork();
    
    if(PID == 0)
    {
        //child
         
        execl ("/bin/ls", "ls", "-l", (char *)0);
    }
    else if(PID > 0)
    {
        //parent
        printf("Hello world\n");
    }
    else if(PID < 0)
    {
        perror("Fork failed\n");
    }
}