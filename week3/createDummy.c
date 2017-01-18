/**
 * createDummy.c
 *
 * Kuzma Leshakov
 * k.leshakov@innopolis.ru
 *
 * Task: Write a C program that creates a file called dummy.txt in the current directory using execv() library call. Compile and run the program 
 */
 
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
    char* args[] = {"lol", "dummy.txt", (char*) 0};
    execv ("/usr/bin/touch", args);
    return 0;
    
}