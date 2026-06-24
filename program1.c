#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter value of n: ");
    scanf("%d", &n);

    int arr[n - 1];
    
    printf("Enter %d elements: ", n - 1);
    for(i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    int totalSum = n * (n + 1) / 2;
    int arrSum = 0;

    for(i = 0; i < n - 1; i++) {
        arrSum += arr[i];
    }

    printf("Missing Number = %d\n", totalSum - arrSum);

    return 0;
}