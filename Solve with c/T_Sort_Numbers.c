#include <stdio.h>

int main() {
  int a, b, c;

  // Read the three input numbers from the user.
  printf("Enter three numbers: ");
  scanf("%d %d %d", &a, &b, &c);

  // Sort the three numbers in ascending order.
  if (a > b) {
    int temp = a;
    a = b;
    b = temp;
  }
  if (b > c) {
    int temp = b;
    b = c;
    c = temp;
  }
  if (a > b) {
    int temp = a;
    a = b;
    b = temp;
  }

  // Print the three sorted numbers to the console.
  printf("%d\n%d\n%d\n", a, b, c);
  printf("\n");

  // Print the three input numbers in the sequence as they were read to the console.
  printf("The three input numbers in the original sequence are: %d %d %d\n", a, b, c);

  return 0;
}
