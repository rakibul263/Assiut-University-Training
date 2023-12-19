#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    while (A != B)
    {
        if (A > B)
        {
            A = A - B;
        }
        else
        {
            B = B - A;
        }
    }
    printf("%d\n", A);

    return 0;
}
