#include <stdio.h>

int main()
{
    int length;
    scanf("%d", &length);
    int space = length - 1;
    int star = 1;
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        space--;
        for (int j = 0; j < star; j++)
        {
            printf("*");
        }
        star += 2;
        printf("\n");
    }

    return 0;
}