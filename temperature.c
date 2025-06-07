#include <stdio.h>

int main(){
    char choice = '\0';
    float fahrenheit = 0.0f;
    float celcius = 0.0f;

    printf("TEMPERATURE CONVERSION CALCULATOR\n");
    printf("f. Fahrenheit to celcius\n");
    printf("c. Celcius to fahrenheit\n");
    printf("Is temperature in fahrenheit (f) or celcius (c)?: ");
    scanf("%c", &choice);

    if(choice == 'f'){
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celcius = (fahrenheit - 32) * 5/9;
        printf("%.1f fahrenheit to celcius is %.1f",fahrenheit,celcius);
    }
    else if(choice == 'c'){
        printf("Enter the temperature in Celcius: ");
        scanf("%f", &celcius);
        fahrenheit = (celcius * 9/5) + 32;
        printf("%.1f Celcius to Fahrenheit is %.1f",celcius, fahrenheit);

    }
    else{
        printf("Invalid choice\n");
    }

    return 0;

}