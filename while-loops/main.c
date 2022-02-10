#include <stdio.h>
#include <stdlib.h>

int main(){
  int index = 1;
  while(index<=10){
    printf("%d\n", index);
    index++;
  }
  
  //The difference is that no matter what the while condition is, it will always do the first iteration
  do{
    printf("Hi from the do while: %d\n", index);
    index++;
  }while(index<=10);

  return 0;
}