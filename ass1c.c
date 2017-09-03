#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
int main( int argc, char *argv[] ){
  pid_t pid;
  int i;
  pid = fork();
  if( pid == -1 ){
    printf("\nProcess creation falied \n");// print statement for c
    exit(-1);    
  }
  else if( pid>0 ){
    wait();
    printf("\nChild Treminated");
    exit(-1);
  }
  else{
    printf("\nChild  starts");
    i = execl(argv[1],argv[2],NULL);
    exit(-1);
  }
}

# to run - ./a.out /bin/ls ls
