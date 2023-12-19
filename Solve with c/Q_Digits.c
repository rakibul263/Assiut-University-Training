#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &m);
        do
        {
            printf("%d ", m % 10);
            m = m / 10;
        } while (m != 0);
        printf("\n");
    }
    
    return 0;
}