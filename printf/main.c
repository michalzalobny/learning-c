#include <stdio.h>
#include <stdlib.h>

int main(){
  int favNum = 1000;
  printf("Hello \"World\"\n;)\n"); // You can insert specials signs using \ symbol \n \" etc.
  //%d -> integer; %s -> string, %f-> decimal, %c -> single chars
  printf("My favourite %s is %d and %f","number", favNum, 21.37);// to print different type of data we need format specifier.
  return 0;
}