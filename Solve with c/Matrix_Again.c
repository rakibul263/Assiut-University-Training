#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int ara[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d ", &ara[i][j]);
        }
    }
    for (int j = 0; j < m; j++)
    {
        printf("%d ", ara[n - 1][j]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ara[i][m - 1]);
    }

    return 0;
}