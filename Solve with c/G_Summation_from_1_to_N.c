#include <stdio.h>

int main()
{
    long long int n;
    long long int sum=0;
    scanf("%lld", &n);
    sum = (n*(n+1))/2;//formula for the summation of 1 to N number
    printf("%lld\n",sum);

    return 0;
}