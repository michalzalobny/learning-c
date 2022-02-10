#include <stdio.h>
#include <stdlib.h>

int main(){
  char characterName[] = "Tom"; //storing a bunch of characters in the variable  
  int characterAge = 75;

  printf("There was a man named %s\n", characterName); //%s is telling C im going to place String (collection of chars) there
  printf("%s was %d years old\n",characterName, characterAge); //%d reoresents the integer number
  printf("%s really liked his name\n", characterName);
  characterAge = 35;
  printf("but he did not like being %d.\n", characterAge);
  return 0;
}