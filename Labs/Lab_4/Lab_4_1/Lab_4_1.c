#include <stdio.h>

int main(){
    int a, b;
    char op;

    printf("Enter an integer arithemetic expression involving a single operation (leave no space)\n");
    scanf("%d%c%d", &a, &op, &b);

    switch (op)
    {
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            break;
        case '/':
            printf("%d",a/b);
        default:
            printf("Wrong Input");
            break;
    }

    return 0;
}