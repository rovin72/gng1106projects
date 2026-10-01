#include <stdio.h>

int main(){
    int N;
    int sum=0;
    printf("Enter an integer N\n");
    scanf("%d", &N);

    for (int i=0; i<N; i++){
        sum+=1+i;    
        printf("The current sum is %d\n", sum); 
    }

    printf("The sum from 1 to N is: %d\n", sum);
    return 0;
}