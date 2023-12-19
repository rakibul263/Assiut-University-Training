#include <stdio.h>
#include<string.h>

int main() {
  char str[1001];
  int i, j;
  scanf("%s", str);

  i = 0;
  j = strlen(str) - 1;
  char rev=strrev(str);

  while (i < j) {
    if (str[i] != str[j]) {
      printf("%s\n",rev);
      printf("NO\n");
      return 0;
    }
    i++;
    j--;
  }
  printf("%s\n",str);
  printf("YES");

  return 0;
}
