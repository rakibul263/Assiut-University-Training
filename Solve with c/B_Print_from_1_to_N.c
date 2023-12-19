#include <stdio.h>
void print_rec(int i)
{
    if (i == 0)
        return;
    print_rec(i - 1);
    printf("%d\n", i);
}
int main()
{
    int num;
    scanf("%d", &num);
    print_rec(num);

    return 0;
}