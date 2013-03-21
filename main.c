#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include<stdlib.h>

void main (int argc, char *argv[]) {
FILE *f = NULL;

int pid = fork();

f = fopen("first-one.txt", "wt");

if(pid == 0)
fprintf(f, "%d, %d", pid, getpid());
else if (pid > 0)
printf("%d, %d", pid, getpid());
else
printf("FUUUUUUUUUUU");

fclose(f);
} 
