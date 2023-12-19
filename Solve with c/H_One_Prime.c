#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    if (X < 2) {
        printf("NO\n");  
    } else {
        int is_prime = 1;  
        for (int i = 2; i * i <= X; i++) {
            if (X % i == 0) {
                is_prime = 0;  
                break;
            }
        }
        if (is_prime) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
