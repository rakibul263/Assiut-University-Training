#include <stdio.h>
void dig(int i)
{
    if (i == 0)
        return;
    int e = i % 10;
    dig(i / 10);
    printf("%d ", e);
}
int main()
{
    int n;
    scanf("%d", &n);
    // for(int i=0;i<n;i++)
    while (n--)
    {
        int x;
        scanf("%d", &x);
        dig(x);
        if (x == 0)
        {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}