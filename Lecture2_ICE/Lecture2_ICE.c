#include <stdio.h>

int main()
{
    int temperatureNight, temperatureNoon;
    printf("Guess the temperature at noon\n");
    scanf("%d",&temperatureNoon);
    printf("Guess the temperature at night\n");
    scanf("%d",&temperatureNight);
    printf("The temperatures tomorrow at noon and night are %d degrees and %d degrees\n", temperatureNoon, temperatureNight);
    printf("The temperature difference is %d degrees\n", temperatureNoon - temperatureNight);
    return 0;
}