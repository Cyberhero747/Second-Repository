#include <stdio.h>
void main() {
    int num = 5;
    long long factorial = 1; 
    // Calculate factorial using a loop
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }
    printf("The factorial of %d is %lld\n", num, factorial);
}
