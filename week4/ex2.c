/**
 * ex2.c
 *
 * Kuzma Leshakov
 * k.leshakov@innopolis.ru
 *
 * task: Write a program that creates a child process and transfers the string “Hello World” from the parent process to the child process using pipes. Child process should print the string after receiving it from the pipe
 */
 
 #include <unistd.h>
 #include <stdio.h>
 
 int main(void)
 {
     char* string = "Hello World";
     char buf[20];
     int fds[2];
     
     pipe(fds);
     pid_t PID = fork();
     
     if (PID == 0)
     {
         //child
         read(fds[0], buf, 15);
         printf("buf: %s\n", buf);
     }
     else if (PID > 0)
     {
         write(fds[1], string, 11); //parent
     }
 }