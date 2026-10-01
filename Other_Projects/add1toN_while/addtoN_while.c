#include <stdio.h>

int main(){
    int N;
    int sum=0;
    int i=0;
    printf("Enter an integer N\n");
    scanf("%d", &N);
    
    while(i<N){
        sum+=1+i;    
        printf("The current sum is %d\n", sum); 
        i++;
    }

    printf("The sum from 1 to N is: %d\n", sum);
    return 0;
}