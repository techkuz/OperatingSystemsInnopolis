/**
 * ex5.c
 *
 * Kuzma Leshakov
 * k.leshakov@innopolis.ru
 *
 * task: Write a C program that forks a child process, checks on it’s status using waitpid() call and exits once the child has terminated. Childs should sleep for 10 seconds and exit.
 */
 
 #include <unistd.h>
 #include <stdio.h>
 #include <signal.h>
 #include <stdlib.h>
 #include <sys/types.h>
 #include <sys/wait.h>
 
 int main(void)
 {
     pid_t PID = fork();
     
     if (PID == 0)
     {
         sleep(10);
         exit(25);//child
     }
     else if(PID > 0)
     {
         waitpid(-1, 25 , 0);//parent
     }
 }