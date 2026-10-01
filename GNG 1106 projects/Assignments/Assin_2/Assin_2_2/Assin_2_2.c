#include <stdio.h>

int main(){ 

    int userPercent;

    printf("Enter a percent grade integer between (0 and 100)\n"); // Prompts user for grade
    scanf("%d", &userPercent);

    if (userPercent<0 || userPercent>100){ //checks for percent validity
        printf("Wrong Input");
    } 
    else if (userPercent>=90){ //codes each percent range to a letter grade
        printf("Your Grade is an A+\n");
    } 
    else if (userPercent>=85){
        printf("Your Grade is an A\n");
    } 
    else if (userPercent>=80){
        printf("Your Grade is an A-\n");
    } 
    else if (userPercent>=75){
        printf("Your Grade is a B+\n");
    } 
    else if (userPercent>=70){
        printf("Your Grade is a B\n");
    } 
    else if (userPercent>=65){
        printf("Your Grade is a C+\n");
    } 
    else if (userPercent>=60){
        printf("Your Grade is a C\n");
    } 
    else if (userPercent>=55){
        printf("Your Grade is a D+\n");
    } 
    else if (userPercent>=50){
        printf("Your Grade is a D\n");
    } 
    else if (userPercent>=40){
        printf("Your Grade is an E\n");
    } 
    else {
        printf("Your Grade is an F\n");
    }

    return 0;
}