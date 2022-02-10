#include <stdio.h>
#include <stdlib.h>

int main(){
    char color[20];
    char pluralNoun[20];
    char celebrityF[20]; //first name
    char celebrityL[20]; //last name

    printf("Enter a color: ");
    scanf("%s", color);

    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);

    printf("Enter a celebrity: ");
    scanf("%s%s", celebrityF, celebrityL); //I can scan for two strings of chars with %s%s

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s\n", celebrityF, celebrityL);
    return 0;
}