#include <stdio.h>
#include <stdlib.h>

int main(){
  //pointer (memory address) is a type of data that we can use in the program, like int, char, double etc

  int age = 30;
  int * pAge = &age;//We can store pointer (memory address) inside the pointer variable
  double gpa = 3.4;
  double * pGpa = &gpa;
  char grade = 'A';
  char * pGrade = &grade;
  

  printf("age's memory address: %p\n", &age); //&sth returns the physical address

  return 0;
}