#include <stdio.h>

int main(){

    int age = 0;

    printf("Age Checker\n");

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18){

        printf("You are an adult!");
    }

    else if(age >= 70){

        printf("You are a Senior!");
    }

    else{

        printf("You are a minor!");
    }


    return 0;
}