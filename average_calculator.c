#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("The number of integers must be positive.\n");
        return 1;
    }
    int numbers[n];
    int sum = 0;
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }
    float average = (float)sum / n;
    printf("The average is: %.2f\n", average);
    return 0;
}

