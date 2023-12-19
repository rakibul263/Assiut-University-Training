#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int ara[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    int x;
    scanf("%d",&x);
    int count=-1;
    for(int i=0;i<n;i++)
    {
        if( x == ara[i])
        {
            count=i;
            break;
        }
    }
    printf("%d\n",count);
    return 0;
}