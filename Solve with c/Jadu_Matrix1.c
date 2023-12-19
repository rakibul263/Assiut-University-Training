#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int result=m+n;
    int ara[m][n];
    if (m != n)
    {
        printf("NO\n");
    }
    else
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d ", &ara[i][j]);
            }
        }
        int flag = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    if (ara[i][j] == 1)
                    {
                        flag++;
                    }
                }
                if ((i + j) == (m - 1))
                {
                    if (ara[i][j] == 1)
                    {
                        flag++;
                    }
                }
            }
        }
        if(flag==result)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}