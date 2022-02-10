#include <stdio.h>
#include <stdlib.h>

int main(){
  //During the runtime, C is storing the value of the variables in the RAM memory in the specific memory address
  //So every value has a physical memory address, that C can access and use

  int age = 30;
  double gpa = 3.4;
  char grade = 'A';

  //printing the physical memory address, (%p stands for pointer)
  printf("age: %p\ngpa: %p\ngrade: %p", &age, &gpa, &grade);

  return 0;
}