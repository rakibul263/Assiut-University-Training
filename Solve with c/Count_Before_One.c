#include <stdio.h>
int count_before_one(int a[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] != 1)
        {
            count++;
            continue;
        }
        else if(a[i]==1)
        {
            break;
        }
        
    }
    return count;
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
    int rec_data = count_before_one(a, n);
    printf("%d\n", rec_data);

    return 0;
}