#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char ch[100001];
        scanf("%s", ch);
        int count = 0;
        for (int i = 0; i < strlen(ch); i++)
        {
            if ((ch[i] == '1' && ch[i + 1] == '0' && ch[i + 2] == '1') || (ch[i] == '0' && ch[i + 1] == '1' && ch[i + 2] == '0'))
            {
                count++;
            }
        }
        if (count > 0)
            printf("Good\n");
        else
            printf("Bad\n");
    }

    return 0;
}