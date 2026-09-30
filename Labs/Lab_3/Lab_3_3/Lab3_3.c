#include <stdio.h>

int main(){
    //declares vars
    int divisibleNum;
    
    //gets user input
    printf("Enter an integer\n");
    scanf("%d",&divisibleNum);

    if (divisibleNum % 6 == 0){
        printf("%d is divisible by 6", divisibleNum); //checks for divisibilty by 6
    } 
    else if (divisibleNum % 3 == 0){
        printf("%d is divisible by 3", divisibleNum); //checks for divisibility by 3
    } 
    else if (divisibleNum % 2 == 0){
        printf("%d is divisible by 2", divisibleNum); //checks for divisibility by 2
    } 
    else {
        printf("%d is not divisible by 2 or 3", divisibleNum);
    }

    return 0;
}