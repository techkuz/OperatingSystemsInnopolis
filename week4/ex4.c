/**
 * ex4.c
 *
 * Kuzma Leshakov
 * k.leshakov@innopolis.ru
 *
 * task: Write a C program that fork’s a child process, waits for 10 seconds and then sends a SIGTERM signal to the child. Child process should run an infinite loop and print “I’m alive” every second. Hint: use kill() C function to send a signal.
 */
 
 #include <unistd.h>
 #include <stdio.h>
 #include <signal.h>

 
 
 int main(void)
 {
     pid_t PID = fork();
     
     if(PID == 0)
     {
         //child
         while(1)
         {
             printf("I'm alive\n");
             sleep(1);
         }
     }
     else if(PID > 0)
     {
         //parent
     }
     sleep(10);
     kill(0, SIGTERM);
 }