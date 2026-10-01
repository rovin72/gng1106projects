#include <stdio.h>

int main() {
    //declares vars
    int userInt;

    //gets user input
    printf("Please enter an integer:\n");
    scanf("%d",&userInt);

    //divisible by 2 check + output
    if (userInt % 2 == 0){  //note: could use ternary operator
        printf("The number %d is even\n",userInt);
    } 
    else {
        printf("The number %d is odd\n",userInt);
    }

    return 0;
}