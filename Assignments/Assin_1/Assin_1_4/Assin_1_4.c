#include <stdio.h>

int main()
{
    float cadValue;
    float exchangeRate = 0.71;

    printf("Enter an amount in CAD:\n"); //prompts user then gets input
    scanf("%f",&cadValue);

    printf("The amount is $%.2f in USD\n", exchangeRate*cadValue); //prints converted price, .2 rounds to 2 decimal places
    return 0;
}
