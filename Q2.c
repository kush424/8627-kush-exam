//write a C program use switch statment.Display Monday to sunday.

#include <stdio.h>

int main() {
    int day;

    printf("\n 1 is Monday ");
    printf("\n 2 is Tuesday");
    printf("\n 3 is wednesday");
    printf("\n 4 is Thursday");
    printf("\n 5 is Friday");
    printf("\n 6 is Saturday");
    printf("\n 7 is Sunday");
    printf("\n Enter a number (1-7): ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input! please enter a number between 1 and 7.\n");
    }

    return 0;
}
