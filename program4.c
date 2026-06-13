#include <stdio.h>

int main() {
    long long n;
    int largest = 0, i;

    printf("Enter a number: ");
    scanf("%lld", &n);

    for(i = 2; i <= n; i++) {
        while(n % i == 0) {
            largest = i;
            n = n / i;
        }
    }

    printf("Largest Prime Factor = %d", largest);

    return 0;
}