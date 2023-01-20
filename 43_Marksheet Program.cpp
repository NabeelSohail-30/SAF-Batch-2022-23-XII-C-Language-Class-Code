#include <stdio.h>

int main() {
    int n, i;
    float marks[10], total = 0, average, percentage;
    char grade;
    printf("Enter the number of subjects: ");
    scanf("%d", &n);
    printf("Enter marks of %d subjects: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &marks[i]);
        total += marks[i];
    }
    average = total / n;
    percentage = (total / (n * 100)) * 100;
    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    printf("Obtained marks: %.0f\n", total);
    printf("Average marks: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);
    return 0;
}

