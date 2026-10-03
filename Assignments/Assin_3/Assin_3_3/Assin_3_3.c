#include <stdio.h>

int main(){
    int current_num,prev_num=-1;
    int double_1_count=0;
    for (int i=0; i<10; i++){
        while (1) {
            printf("Enter a number:\n"); //prompts user 
            scanf("%d", &current_num); //updates current num to new num
            if (current_num!=0||current_num!=1){
                printf("Invalid Input");
            }
            else {
                break;
            }
        }

        if (prev_num==1 && current_num==1){ //checks for 2  1's following eachother
            double_1_count++;
        }
        prev_num=current_num;
    }
    printf("The number of 1's immediately followed by another 1 is %d", double_1_count);
    return 0;
}