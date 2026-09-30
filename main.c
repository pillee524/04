#include <stdio.h>

int main(void)
{
    int a;
    printf("Input the year : ");
    scanf("%i", &a);
    


    printf("Is the year %i the leap year? : %i\n", a, ((a % 4 == 0) && (a % 100 != 0)) || (a % 400 == 0));
    return 0;
}