#include <stdio.h>

int main() {
    int n, i;
    int arr[10];
    int sum = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of array elements: %d\n", sum);
    return 0;
}

