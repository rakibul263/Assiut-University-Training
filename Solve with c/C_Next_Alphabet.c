#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    if (ch == 'z')
    {
        printf("%c\n", 'a');
    }
    else
    {
        printf("%c\n", ch + 1);
    }
    return 0;
}
