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
            if (a%b==0){
                printf("%d",a/b);
            }
            else {
                printf("A is not divisible by B");
            }
        default:
            printf("Wrong Input");
            break;
    }

    return 0;
}