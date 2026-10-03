#include <stdio.h>

int main(){
    int smallestNum;
    for (int i=0; i<10;i++){
        int currentVal=0;
        while (currentVal<=0){
            printf("Enter a Positive Integer:\n");
            scanf("%d",&currentVal);

            if (currentVal<=0){
                printf("Invalid Input");
            }
        }
        if(i==0){
            smallestNum=currentVal;
        } 
        else if (currentVal<smallestNum) {
            smallestNum=currentVal;
        }
    }
    printf("The smallest inputted number is %d\n", smallestNum);

    return 0;
}
