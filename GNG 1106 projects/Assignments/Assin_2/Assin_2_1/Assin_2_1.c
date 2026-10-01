#include <stdio.h>

int main(){
    int num1, num2, num3;
    
    printf("Enter 3 integers\n");
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1==num2||num2==num3||num1==num3){
        printf("Wrong Input");
    } 
    else if (num1>num2 && num1>num3){
        printf("The largest number is %d", num1);
    } 
    else if (num2>num3) {
        printf("The largest number is %d", num2);
    } 
    else {
        printf("The largest number is %d", num3);
    }

    return 0;
}