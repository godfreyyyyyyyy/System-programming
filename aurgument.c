#include <stdio.h>

int main() {
    int num1, num2, num3, highest;

    // Input three numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    // Determine the highest number
    if (num1 >= num2 && num1 >= num3) {
        highest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        highest = num2;
    } else {
        highest = num3;
    }

    // Output the result
    printf("The highest number is: %d\n", highest);

    return 0;
}
