#include <stdio.h>
void print_rec(int i)
{
    if (i == 1)//base case
        return;
    printf("%d ", i);
    print_rec(i - 1);
}
int main()
{
    int num;
    scanf("%d", &num);
    print_rec(num);
    int last=num-(num-1);
    printf("%d",last);

    return 0;
}