#include <stdio.h>

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    //calculate size of array
    int n = sizeof(arr) / sizeof(arr[0]);	
    printf("Array elements are: ");
    printArray(arr, n);
    return 0;
}

