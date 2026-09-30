#include <stdio.h>

int main(){
    double a, b;
    char op;

    printf("Enter an arithemetic expression involving a single operation (leave no space)\n");
    scanf("%lf%c%lf", &a, &op, &b);

    switch (op)
    {
        case '+':
            printf("%lf",a+b);
            break;
        case '-':
            printf("%lf",a-b);
            break;
        case '*':
            printf("%lf",a*b);
            break;
        case '/':
            printf("%lf",a/b);
        default:
            printf("Wrong Input");
            break;
    }

    return 0;
}