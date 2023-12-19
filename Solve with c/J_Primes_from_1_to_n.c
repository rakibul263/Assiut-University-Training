#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    if (N >= 2)
    {
        printf("2");
        for (int i = 3; i <= N; i++)
        {
            int isPrime = 1;
            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime)
            {
                printf(" %d", i);
            }
        }
    }

    return 0;
}
