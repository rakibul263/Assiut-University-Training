#include<stdio.h>

int main()
{
    int row, col;
    scanf("%d %d",&row, &col);
    int ara[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&ara[i][j]);
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=col-1;j>=0;j--)
        {
            printf("%d ",ara[i][j]);
        }
        printf("\n");
    }

    return 0;
}