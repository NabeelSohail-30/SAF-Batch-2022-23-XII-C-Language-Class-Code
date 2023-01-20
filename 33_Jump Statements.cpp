#include <stdio.h>

int main() {
    // using 'break' statement in a for loop
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break; // exits the loop when i is 5
        }
        printf("%d ", i);
    }
    printf("\n");

    // using 'continue' statement in a while loop
    int j = 0;
    while (j < 10) {
        j++;
        if (j % 2 == 0) {
            continue; // skips the current iteration when j is even
        }
        printf("%d ", j);
    }
    printf("\n");

    // using 'goto' statement
    int k = 0;
    goto start; // jumps to the label 'start'

    printf("This line will not be executed\n");

    start:
    printf("%d ", k); // executed when 'goto start' is encountered
    k++;
    if (k < 3) {
        goto start; // jumps back to the label 'start'
    }

    // using 'return' statement
    return 0; // exits the program and returns 0 to the operating system
}

