#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char ara[n];
    for(int i=0;i<n;i++)
    {
        scanf("%s",&ara[i]);
    }
    int sum = 0;
    for (int i=0;i<n;i++)
    {
        sum+=ara[i]-'0';
    }
    printf("%d\n",sum);

    return 0;
}