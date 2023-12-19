#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int N;
        scanf("%d", &N);

        char s[N];
        scanf("%s", s);

        int ti = 0, pa = 0;

        for (int i = 0; i < N; i++)
        {
            if (s[i] == 'T')
            {
                ti++;
            }
            else if (s[i] == 'P')
            {
                pa++;
            }
        }

        if (ti > pa)
        {
            printf("Tiger\n");
        }
        else if (pa > ti)
        {
            printf("Pathaan\n");
        }
        else
        {
            printf("Draw\n");
        }
    }

    return 0;
}
