#include <stdio.h>
#include <stdlib.h>

void sayHi(char name[], int age){
  printf("Hello %s, you are %d years old", name, age);
}

int main(){
  char name[20];
  printf("Provide your name: ");
  scanf("%s", name);
  sayHi(name, 25);
  return 0;
}

