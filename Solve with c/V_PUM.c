#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);
    int start = 1;
    int end = 3;

    for (int i = 0; i < N; i++)
    {
        printf("%d %d %d PUM\n", start, start + 1, end);
        start += 4;
        end += 4;
    }

    return 0;
}
