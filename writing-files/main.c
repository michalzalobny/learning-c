#include <stdio.h>
#include <stdlib.h>

int main(){
  //creates file
  //file modes: r -> read; w -> write (create new or write over existing); a -> append information onto file
  FILE * fpointer = fopen("employees.txt", "w"); //file pointer is storing the memory address of the employees file we are creating

  //It overwrites the file each time (because of "w" in fopen())
  fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting"); //allows to write information to file
  fclose(fpointer);

  FILE * fpointer2 = fopen("employees2.txt", "a");
  //It appends to the file (so previous data is not ereased)
  fprintf(fpointer2, "Kelly, Graphic designer\n");
  fprintf(fpointer2, "Ann, Programmer\n");
  fclose(fpointer2);

  return 0;
}