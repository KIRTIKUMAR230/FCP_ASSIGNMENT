#include <stdio.h>


float calculate_simple_interest(float principal, float rate, float time) {
    float interest = (principal * rate * time) / 100;
    return interest;
}

int main() {

    float principal_amount, interest_rate, time_period;


    printf("Enter principal amount: ");
    scanf("%f", &principal_amount);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter time period (in years): ");
    scanf("%f", &time_period);

   
    float simple_interest = calculate_simple_interest(principal_amount, interest_rate, time_period);

    printf("Simple Interest: %.2f\n", simple_interest);

    return 0;
}