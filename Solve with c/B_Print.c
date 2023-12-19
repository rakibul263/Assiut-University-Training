#include <stdio.h>
void number(int n)
{
    int i;
    for (i = 1; i < n; i++)
    {
        printf("%d ", i);
    }
    printf("%d", i);
}
int main()
{
    int n;
    scanf("%d", &n);
    number(n);

    return 0;
}