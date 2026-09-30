#include <stdio.h>

int main() 
{
    int rectLength, rectWidth;

    printf("Please enter the length then the width of the rectangle in centimeters (integer only)\n");
    scanf("%d%d",&rectLength,&rectWidth);
    
    printf("The length and width are %d cm and %d cm respectively\n", rectLength, rectWidth);
    return 0;
}
