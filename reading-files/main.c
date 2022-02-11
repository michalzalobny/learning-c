#include <stdio.h>
#include <stdlib.h>

int main(){
  char line[255];
  //r - read information 
  FILE * fpointer = fopen("employees.txt", "r");

  fgets(line, 255, fpointer); //reads the lines of file line by line
  printf("%s", line);
  fgets(line, 255, fpointer);
  printf("%s", line);
  

  fclose(fpointer);
  return 0;
}