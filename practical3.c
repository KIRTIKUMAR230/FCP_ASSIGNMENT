#include <stdio.h>

int calculateSum(int n) {
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    return sum;
}

int main() {
    
    int n;


    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    
    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1; 
    }

    
    int sum = calculateSum(n);
    printf("Sum of natural numbers up to %d: %d\n", n, sum);

    return 0;
}