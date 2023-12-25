#include <stdio.h>

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}


float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    
    float temperature;

    printf("Enter temperature: ");
    scanf("%f", &temperature);

 
    float fahrenheit = celsiusToFahrenheit(temperature);
    printf("%.2f Celsius is %.2f Fahrenheit\n", temperature, fahrenheit);

  
    float celsius = fahrenheitToCelsius(temperature);
    printf("%.2f Fahrenheit is %.2f Celsius\n", temperature, celsius);

    return 0;
}