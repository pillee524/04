#include <stdio.h>

int main(void) {
    int a, second, minute, hour;

    printf("Input seconds: ");
    scanf("%i", &a);

    hour = a / 3600;
    a = a % 3600;
    minute = a / 60;
    second = a % 60;

    printf("The time is : %i : %i : %i\n", hour, minute, second);
    return 0;
}