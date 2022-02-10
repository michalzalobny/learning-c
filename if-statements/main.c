#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2, int num3){
int result;

    if(num1 >= num2 && num1 >= num3){
        result = num1;
    } else if (num2 >= num1 && num2 >= num3){
        result = num2;
    }else{
        result = num3;
    }

}

int main(){
    if(3 > 2 || 2 > 5 || 2 != 5){
        printf("%d is bigger", max(2, 7, 1));  
    }

    return 0;
}