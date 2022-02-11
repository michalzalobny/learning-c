#include <stdio.h>
#include <stdlib.h>

int main(){
  int age = 30;
  int *pAge = &age;
  

  printf("%p\n", pAge);

  //It dereferences the pointer - so it goes to the memory address and takes the value its storing
  printf("The value of the address is: %d\n", *pAge); 

  //same as this
  printf("The value of the address is: %d", *&age); 

  return 0;
}