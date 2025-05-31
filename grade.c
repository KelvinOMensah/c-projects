#include <stdio.h>

int main(){

    int score = 0;

    char grade = ' ';

    printf("Student Grade Calculator\n");

    printf("Enter your score: ");
    scanf("%d", &score);

    if( score >= 80){

        printf("You had grade A (outstanding)");
    }

    else if ( score >= 75){

        printf("You had grade A- (excellent)");
    }

    else if( score >= 70){

        printf("You had grade B (good)");
    }

    else if( score >= 65){

        printf("You had grade B- (fairly good)");
    }

    else if( score >= 60){

        printf("You had grade C (average)");
    }

    else if( score >= 41){

        printf("You had grade D (pass)");
    }

    else {

        printf("You had grade F (fail)");
    }

    return 0;


}