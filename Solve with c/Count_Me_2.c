#include <stdio.h>
#include <string.h>

int main()
{
    char a[100001];
    scanf("%s", a);
    int cons = 0;
    // int len = strlen(a);
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            if (a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u')
            {
                cons++;
            }
        }
    }
    printf("%d\n", cons);

    return 0;
}