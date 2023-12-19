#include<stdio.h>

int main()
{
    int n,positive=0,nagetive=0;
    scanf("%d",&n);
    int ara[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(ara[i]>0)
            positive+=ara[i];
        else
            nagetive+=ara[i];
    }
    printf("%d %d\n",positive, nagetive);

    return 0;
}