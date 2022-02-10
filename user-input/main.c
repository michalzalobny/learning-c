#include <stdio.h>
#include <stdlib.h>

int main(){
    char grade;
    printf("Enter your grade:");
    scanf("%c", &grade);
    printf("Your grade is %c\n", grade);
    
    int age;
    printf("Enter your age: ");
    scanf("%d", &age); //We have to use a pointer to the variable while getting the user input
    printf("You are %d years old\n", age);
    
    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa); //We need to use lf instead of f here
    printf("Your gpa is %f\n", gpa);

    char name[20];
    printf("Enter your name: ");
    // scanf("%s", name);//Its okay, but after the first space it stops
    fgets(name, 20, stdin); //better alternative, however after the variable there is always \n sign
    printf("Your name is %sdasd", name);
    
    return 0;
}