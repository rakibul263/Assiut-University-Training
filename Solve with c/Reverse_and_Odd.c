#include <stdio.h>

int main()
{
    int num;
    scanf("%d ", &num);
    int ara[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d ", &ara[i]);
    }

    // for (int i = 0; i < num; i++)
    // {
    //     if (i % 2 != 0)
    //     {
    //         ara[i]=ara[i];
    //     }
    // }

    for (int i = num-1; i >= 0; i--)
    {
        if(i%2!=0)
            printf("%d ",ara[i]);
    }

}