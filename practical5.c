#include <stdio.h>


unsigned long long calculateFactorial(int n) {
    unsigned long long factorial = 1;

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    return factorial;
}

int main() {
   
    int number;

   
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    
    if (number < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }


    unsigned long long factorial = calculateFactorial(number);
    printf("Factorial of %d: %llu\n", number, factorial);

    return 0;
}