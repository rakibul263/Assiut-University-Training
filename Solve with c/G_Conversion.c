#include <stdio.h>
#include <string.h>

int main()
{
    char name[100001];
    fgets(name, sizeof(name), stdin);
    scanf("%s",name);
    for (int i = 0; i < strlen(name); i++)
    {
        if (name[i] == ',')
        {
            name[i] = ' ';
        }
        else if (name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i] += 32;
        }
        else if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] -= 32;
        }
    }
    printf("%s\n", name);
    return 0;
}