#include <stdio.h>
#include <string.h>

int main()
{
    char item[20] = "";
    int quantity = 0;
    float price = 0.0f;
    float total = 0.0f;
    char currency = '$';

    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("How many would you like to buy?: ");
    scanf("%d", &quantity);

    printf("What is the price for each item?: ");
    scanf("%f", &price);

    total = price * quantity;

    printf("You have purchased %d %s(s) and the total is %c%.2f", quantity, item , currency , total);

    return 0;
}