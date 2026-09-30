#include <stdio.h>

int main(void)
{
    int a, minutes, seconds;
    printf("Input the seconds : ");
    scanf("%i", &a);
    
    minutes = a / 60;
    seconds = a % 60;

    printf("The time is %i:%i", minutes, seconds);
    return 0;
}