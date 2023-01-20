#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 18) {
        printf("You are a minor.\n");
    } else {
        if (age >= 18 && age < 60) {
            printf("You are an adult.\n");
        } else {
            printf("You are a senior citizen.\n");
        }
    }

    return 0;
}

