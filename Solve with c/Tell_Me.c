#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int x;
        scanf("%d", &x);
        int is_true = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)
                is_true = 1;
        }
        if (is_true)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}