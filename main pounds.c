#include <stdio.h>
#include <stdlib.h>


int main() {
    int choice;
    float start, end, increment;


    printf("Choose an option:\n");
    printf("1. Convert pounds to kilograms\n");
    printf("2. Convert miles to kilometers\n");
    scanf("%d", &choice);


    printf("Enter the starting value: ");
    scanf("%f", &start);

    printf("Enter the ending value: ");
    scanf("%f", &end);

    printf("Enter the increment value: ");
    scanf("%f", &increment);


    if (choice == 1)
        printf("\nTable of Pounds to Kilograms Conversion\n");
    else if (choice == 2)
        printf("\nTable of Miles to Kilometers Conversion\n");
    else {
        printf("Invalid choice.\n");
        return 1;
    }
    printf("-----------------------------------------\n");


    float value = start;
    while (value <= end) {
        if (choice == 1) {
            float kilograms = value * 0.453592;
            printf("%8.2f lb\t%6.2f kg\n", value, kilograms);
        } else if (choice == 2) {
            float kilometers = value * 1.60934;
            printf("%8.2f miles\t%6.2f km\n", value, kilometers);
        }
        value += increment;
    }

    return 0;
}



