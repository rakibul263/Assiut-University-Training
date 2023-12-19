#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    switch (n)
    {
    case 1:
    {
        int space = 6 - 1;
        for (int i = 0; i < 6; i++)
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
        break;
    }
    case 3:
    {
        int space = 7 - 1;
        for (int i = 0; i < 7; i++)
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
        break;
    }
    case 5:
    {
        int space = 8 - 1;
        for (int i = 0; i < 8; i++)
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
        break;
    }
    case 7:
    {
        int space = 9 - 1;
        for (int i = 0; i < 9; i++)
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
        break;
    }
    case 9:
    {
        int space = 10 - 1;
        for (int i = 0; i < 10; i++)
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
        break;
    }
    case 11:
    {
        int space = 11 - 1;
        for (int i = 0; i < 11; i++)
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
        break;
    }
    case 13:
    {
        int space = 12 - 1;
        for (int i = 0; i < 12; i++)
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
        break;
    }
    case 15:
    {
        int space = 13 - 1;
        for (int i = 0; i < 13; i++)
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
        break;
    }
    case 17:
    {
        int space = 14 - 1;
        for (int i = 0; i < 14; i++)
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
        break;
    }
    case 19:
    {
        int space = 15 - 1;
        for (int i = 0; i < 15; i++)
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
        break;
    }
    case 21:
    {
        int space = 16 - 1;
        for (int i = 0; i < 16; i++)
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
        break;
    }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}