#include <stdio.h>
#include <string.h>

int is_palindrome(char s[])
{
    int len = strlen(s);
    int i = 0;
    int j = len - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

int main()
{
    char s[1001];
    scanf("%s", s);

    int result = is_palindrome(s);

    if (result == 1)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
