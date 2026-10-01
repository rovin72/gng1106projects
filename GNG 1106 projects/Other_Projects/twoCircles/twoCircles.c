#include <stdio.h>

#define PI 3.1415926536

int main()
{
    int radius1, radius2;
    printf("Enter an two integers for radii of circle 1 and circle 2\n");
    scanf("%d%d", &radius1, &radius2);

    printf("The two perimeters are %lf and %lf respectively\n", 2*PI*radius1, 2*PI*radius2);

    printf("The ratio of the perimeters is %lf\n", (double) radius1/radius2);
    return 0;
}