#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, temp;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int N;
        scanf("%d", &N);
        int A[N], B[N], C[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
            B[i] = A[i];
        }
        for (int i = 0; i < N - 1; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                if (B[i] > B[j])
                {
                    temp = B[i];
                    B[i] = B[j];
                    B[j] = temp;
                }
            }
        }
        for (int i = 0; i < N; i++)
        {
            C[i] = A[i] - B[i];
            printf("%d ", abs(C[i]));
        }
        printf("\n");
    }
    return 0;
}
