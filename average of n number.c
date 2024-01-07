#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;

    // Input: Number of elements
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Input: Elements
    printf("Enter %d numbers:\n", n);
    for (i = 1; i <= n; i++) {
        int num;
        scanf("%d", &num);
        sum += num;
    }

    // Calculate average
    average = sum / n;

    // Display the result
    printf("Average of the first %d numbers = %.2f\n", n, average);

    return 0;
}


