#include <stdio.h>

int main(){
    int nums[5];
    for (int i=0; i<5; i++){
        printf("Enter a number\n");
        scanf("%d",&nums[i]);
    }
    printf("The numbers are:\n");
    for (int i=0; i<5; i++){
        printf("%d\n",nums[i]);
    }

    
    return 0;
}