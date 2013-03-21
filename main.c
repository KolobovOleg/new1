#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include<stdlib.h>

void main (int argc, char *argv[], char *envp[]) {
  FILE *f = NULL;

  int pid = fork();

  f = fopen("first-one.txt", "wt");

  if(pid == 0)
    execle("/usr/bin/env","/usr/bin/evn",  0, envp);
  else if (pid > 0)
    printf("%d, %d", pid, getpid());
  else
    printf("!!!!!!!!!!!!!!!!");

  fclose(f);
} 
