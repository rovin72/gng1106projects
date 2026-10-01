#include <stdio.h>
int main(){
    double sidelength1, sidelength2, sidelength3;

    printf("Enter 3 side lengths of a triangle\n");
    scanf("%lf%lf%lf", &sidelength1, &sidelength2, &sidelength3); //collects 3 side lengths

    if (sidelength1<=0 || sidelength2<=0 || sidelength3<=0){ //confirms side lengths are positive
        printf("Wrong Input\n");
    } 
    else if (sidelength1+sidelength2<sidelength3 || sidelength1+sidelength3<sidelength2 || sidelength2+sidelength3<sidelength1){
        printf("These 3 sidelengths cannot make a triangle\n"); //checks if the sum of any 2 sides is greater than the 3rd side
    } 
    else {
        printf("These 3 sidelengths can make a triangle\n");
    }

    return 0;
}
