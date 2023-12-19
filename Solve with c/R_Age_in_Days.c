#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    int year = num / 365;
    printf("%d years\n", year);
    year = num % 365;

    int month = year / 30;
    printf("%d months\n", month);

    int day = year % 30;
    printf("%d days\n", day);

    return 0;
}