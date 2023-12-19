#include <stdio.h>
#include <math.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    int f_r = floor((double)A / B);
    int c_r = ceil((double)A / B);
    int r_r = round((double)A / B);

    printf("floor %d / %d = %d\n", A, B, f_r);
    printf("ceil %d / %d = %d\n", A, B, c_r);
    printf("round %d / %d = %d\n", A, B, r_r);

    return 0;
}
