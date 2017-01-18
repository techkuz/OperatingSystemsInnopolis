/**
 * ex3.c
 *
 * Kuzma Leshakov
 * k.leshakov@innopolis.ru
 *
 * task: Write a C program that declares signal handlers for SIGKILL, SIGSTOP and SIGUSR1 (refer to Exercise 3). Compile and run the program in the background (./ex4 &). Use kill command to send USR1 signal to the process you have started: $kill -USR1 <pid>. Explain the output
 */
 
 #include <unistd.h>
 #include <stdio.h>
 #include <signal.h>
 
 void sig_handler(int signo);
 
 int main(void)
 {
     int i = 0;
     
     
     if(signal(SIGKILL, sig_handler) == SIG_ERR)
     {
         printf("\n cant catch SIGKILL\n");
     }
     if(signal(SIGSTOP, sig_handler) == SIG_ERR)
     {
         printf("\n cant catch SIGSTOP\n");
     }
     if(signal(SIGUSR1, sig_handler) == SIG_ERR)
     {
         printf("\n cant catch SIGUSR1\n");
     }
    
     while (i < 10)
     {
         sleep(3);
         i++;
     }
     return 0;
 }
 
void sig_handler(int signo) 
{
    if (signo == SIGINT) 
    {
        printf("received SIGINT\n");
    }
    else if (signo == SIGKILL)
    {
        printf("received SIGKILL\n");
    }
    else if (signo == SIGSTOP)
    {
        printf("received SIGSTOP\n");
    }
    else if (signo == SIGUSR1)
    {
        printf("received SIGUSR1\n");
    }
}