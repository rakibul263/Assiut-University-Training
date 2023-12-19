#include <stdio.h>
void print_rec(int n)
{
    if (n == 0)
        return;
    printf("I love Recursion\n");
    print_rec(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    print_rec(n);

    return 0;
}