#include <stdio.h>
#include <stdlib.h>


int main() {
    float start, end, increment;


    printf("Enter the starting temperature in Fahrenheit: ");
    scanf("%f", &start);

    printf("Enter the ending temperature in Fahrenheit: ");
    scanf("%f", &end);

    printf("Enter the increment value: ");
    scanf("%f", &increment);


    printf("\nTable of Fahrenheit to Celsius Conversion\n");
    printf("Fahrenheit\tCelsius\n");
    printf("-----------------------------------------\n");


    for (float fahrenheit = start; fahrenheit <= end; fahrenheit += increment) {
        float celsius = (fahrenheit - 32) * 5 / 9;
        printf("%8.2f\t%6.2f\n", fahrenheit, celsius);
    }

    return 0;
}


