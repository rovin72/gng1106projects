#include <stdio.h>

int main(){
    //declares vars
    int userNum;

    //gets user input
    printf("Please enter an integer:\n");
    scanf("%d",&userNum);

    //divisible by 2 check + output
    if (userNum % 2 == 0){ 
        printf("The number %d is even\n",userNum);
        if (userNum % 4 == 0){ //divisible by 4 check
            printf("%d is also divisible by 4\n",userNum);
        }
    } 
    else {
        printf("The number %d is odd\n",userNum);
    }

    return 0;
}