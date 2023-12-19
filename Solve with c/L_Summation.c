#include <stdio.h>

int sum(int arr[], int size)
{
    if (size == 1)
    {
        return arr[0];
    }
    else
    {
        return arr[0] + sum(arr + 1, size - 1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int result = sum(a, n);
    printf("%d\n", result);

    return 0;
}
