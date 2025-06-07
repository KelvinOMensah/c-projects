#include <stdio.h>

int main() {
    double num1 = 0.00;
    double num2 = 0.00;
    char operator = '\0';
    double result = 0.00;

    printf("Input first number: ");
    scanf("%lf", &num1);
    printf("Input operator ( + - * /): ");
    scanf(" %c", &operator);       //needs to leave a space before %c to clear the input buffer
    printf("Input second number: ");
    scanf("%lf", &num2);

    switch(operator){    // breaks are very important in using switch to avoid the subsequent codes from running at the same time
        case '+':
        result = num1 + num2;
        printf("%.4lf", result);
        break;
        case '-':
        result = num1 - num2;
        printf("%.4lf", result);
        break;
        case '*':
        result = num1 * num2;
        printf("%.4lf", result);
        break;
        case '/':
        if(num2 == 0){
            printf("You cant divide by zero");
        }
        else {
            result = num1 / num2;
            printf("%.4lf", result);
        }
        break;
        default :
        printf("Invalid Operator");
        
    }


    return 0;
}