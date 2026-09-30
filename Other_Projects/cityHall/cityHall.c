#include <stdio.h>

#define OPT_LICENSE 1
#define OPT_STICKER 2
#define OPT_TICKET 3
#define COUNTER_LICENSE 5
#define COUNTER_STICKER 8
#define COUNTER_TICKET 2

int main(){
    int userSelection;
    printf("Make a selection\n");
    printf("\t %d for renew license\n", OPT_LICENSE);
    printf("\t %d for renew sticker\n", OPT_STICKER);
    printf("\t %d for pay tickets\n", OPT_TICKET);
    scanf("%d", &userSelection);

    switch (userSelection)
    {
        case OPT_LICENSE:
            printf("To renew license go to counter %d", COUNTER_LICENSE);
            break;
        case OPT_STICKER:
            printf("To renew sticker go to counter %d", COUNTER_STICKER);
            break;
        case OPT_TICKET:
            printf("To pay ticket go to counter %d", COUNTER_TICKET);
            break;
        default:
            printf("Invalid selection");
            break;
    }

    return 0;
}