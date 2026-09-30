#include <stdio.h>

int main() 
{
    double rectLength, rectWidth;

    printf("Please enter the length then the width of the rectangle in centimeters\n");
    scanf("%lf%lf",&rectLength,&rectWidth);
    
    printf("The length and width are %lf cm and %lf cm respectively\n", rectLength, rectWidth);
    return 0;
}
