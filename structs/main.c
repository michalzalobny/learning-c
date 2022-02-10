#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main(){
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    //We can't just simply assign a string so we have to use strcpy ("string copy") fn to assign the chars array
    strcpy(student1.name, "Jim"); 
    strcpy(student1.major, "Business");


    struct Student student2;
    student2.age = 20;
    student2.gpa = 4.2;
    //We can't just simply assign a string so we have to use strcpy ("string copy") fn to assign the chars array
    strcpy(student1.name, "Mike"); 
    strcpy(student1.major, "CS");


    printf("%f", student2.gpa);

    
    return 0;
}