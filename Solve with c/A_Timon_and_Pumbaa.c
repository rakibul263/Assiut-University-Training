#include<stdio.h>

int main()
{
    int t, p;
    scanf("%d %d",&t, &p);

    if(t > p)
        printf("%d\n",t-p);
    else
        printf("0\n");

    return 0;
}