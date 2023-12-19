#include <stdio.h>

int main()
{
    int count_number;
    scanf("%d", &count_number);
    int m1, m2, days, result, final_result;
    for (int i = 0; i < count_number; i++)
    {
        scanf("%d %d %d", &m1, &m2, &days);
        result = (m1 * days) / (m1 + m2);
        final_result = days - result;
        printf("%d\n", final_result);
    }

    return 0;
}