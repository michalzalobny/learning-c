#include <stdio.h>
#include <stdlib.h>

int main(){
    double num1;
    double num2;
    char op; //operator

    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &op); //We have to put blank space before %c otherwise it won't work
    printf("Enter a number: ");
    scanf("%lf", &num2);


    if(op == '+'){
        printf("%f", num1 + num2);
    } else if(op == '-'){
        printf("%f", num1 - num2);
    } else if(op == '/'){
        printf("%f", num1 / num2);
    } else if(op == '*'){
        printf("%f", num1 * num2);
    } else {
        printf("Invalid operator.");
    }

    return 0;
}