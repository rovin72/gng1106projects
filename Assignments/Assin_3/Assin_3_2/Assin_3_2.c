#include <stdio.h>

int main(){
    int evenCount=0;
    for (int i=0; i<10;i++){
        int currentVal=0;
        while (currentVal<=0){
            printf("Enter a Positive Integer:\n");
            scanf("%d",&currentVal);

            if (currentVal<=0){
                printf("Invalid Input");
            }
        }
        if (currentVal%2==0){
            evenCount++;
        }
    }
    printf("The number of even number's %d\n", evenCount);

    return 0;
}