#include <stdio.h>

int main() 
{
    float rectLength, rectWidth;

    printf("Please enter the length then the width of the rectangle in centimeters\n");
    scanf("%f%f",&rectLength,&rectWidth);
    
    printf("The length and width are %f cm and %f cm respectively\n", rectLength, rectWidth);
    return 0;
}
