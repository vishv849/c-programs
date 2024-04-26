#include <stdio.h>

float celsius_to_fahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsius_to_fahrenheit(celsius);

    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
