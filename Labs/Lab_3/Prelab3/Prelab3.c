#include <stdio.h>

int main()
{
    int num1,num2;
    printf("Enter 2 different integers\n");
    scanf("%d%d",&num1,&num2);
    if (num1==num2) {
        printf("Wrong Input");
    } else {
        printf("The smaller integer is %d\n", (num1<num2) ? num1 : num2); //note ternary operator is a one line if else (avoids reuse of same if statement)
    }
    return 0;
}