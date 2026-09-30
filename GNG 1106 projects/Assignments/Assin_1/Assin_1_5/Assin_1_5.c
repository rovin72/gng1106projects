#include <stdio.h>

int main()
{
    int factor1, factor2;

    //prompts user twice
    printf("Enter an Integer:\n");
    scanf("%d",&factor1);

    printf("Enter another Integer:\n");
    scanf("%d",&factor2);

    //calculates product and prints
    printf("The product of both integers is %d\n",factor1*factor2);
    return 0;
}
