#include <stdio.h>

int main() {
    int num1, num2;
  
    printf("Enter the first integer: ");
    scanf("%d", &num1);
  
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    int result;
    if (num1 > num2) {
        result = num1 - num2;
        printf("The result of %d - %d is %d\n", num1, num2, result);
    } else if (num2 > num1) {
        result = num2 - num1;
        printf("The result of %d - %d is %d\n", num2, num1, result);
    } else {
        printf("Both numbers are equal, so the result is 0.\n");
    }

    return 0;
}
