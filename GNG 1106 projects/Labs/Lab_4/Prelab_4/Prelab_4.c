#include <stdio.h>

int main(){
    int current_num, prev_num, odd_even_count=0; //initialise current num prev num and odd even count
    for (int i=0; i<15; i++){
        printf("Enter a number:\n"); //prompts user 
        if (i>0){
            prev_num=current_num; //updates prev num to old current num
        }
        scanf("%d", &current_num); //updates current num to new num
        if (i>0 && prev_num%2!=0 && current_num%2==0){ //checks for odd with even following if so increments odd_even_count (note !=0 includes negative nums)
            odd_even_count++;
        }
    }
    printf("The number of odd numbers immediately followed by even numbers is %d", odd_even_count);
    return 0;
}