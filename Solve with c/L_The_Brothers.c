#include <stdio.h>
#include <string.h>
int main()
{
    char name1[101], name2[101];
    char name3[101], name4[101];
    scanf("%s %s", name1, name2);
    scanf("%s %s", name3, name4);

    if (strcmp(name2, name4) == 0)
        printf("ARE Brothers\n");
    else
        printf("NOT\n");

    return 0;
}