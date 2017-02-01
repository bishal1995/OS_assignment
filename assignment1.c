#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
int main(){
  pid_t pid;
  int x = 5;
  pid = fork();
  if( pid < 0 ){
    printf("Process creation error");
    exit(-1);    
  }
  else if( pid == 0 ){
    printf("Child process");
    prointf("\n Process id is %d ",getpid());
    printf("\n Value of x is %d ",x);
    printf("\n Process id of parent is %d ",getppid());
  }
  else{
    printf("\n Parent Process");
    printf("\n Process id is %d ",getpid());
    printf("\n Value of x is %d ",x);
    printf("\n Process id of shell is %d",getppid());
  }



  return 0;
}
