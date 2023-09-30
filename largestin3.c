#include <stdio.h>
void main() {
    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d", a);
    printf("Enter the second number: ");
    scanf("%d", b);
    printf("Enter the third number: ");
    scanf("%d", c);
    if (a >= b && a >= c) {
        printf("%d is the greatest.\n", a);
    } else if (b >= a && b >= c) {
        printf("%d is the greatest.\n", b);
    } else {
        printf("%d is the greatest.\n", b);
    }

}
