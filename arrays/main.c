#include <stdio.h>
#include <stdlib.h>

int main(){
  int luckyNumbers[] = {4, 8, 15, 16, 23, 42}; //array of ints
  luckyNumbers[1] = 200;
  printf("%d", luckyNumbers[1]);

  int luckyNumbersNew[10];//this time we dont know how many items there will be, so we have to specify length of the array
  luckyNumbersNew[2] = 80;
  printf("%d", luckyNumbersNew[2]);
  return 0;
}