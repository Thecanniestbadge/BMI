// Programmer:      Thecanniestbadge
// Date:            06/07/2023
// Program Name:    BMI
// Chapter:         Decisions
// Description:     This program calculates the Body Mass Index or also known as BMI based on the user input of height and weight
//                  This program is also programmed to give the user their weight status like if they are under or over weight.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
    // Constant and Variable Declarations
    int height;
    int weight;
    double bmi;
    const int MIN_HEIGHT = 10;
    const int MAX_HEIGHT = 108;
    const int MIN_WEIGHT = 5;
    const int MAX_WEIGHT = 1000;
    const double MIN_OPTIMAL = 18.5;
    const double MAX_OPTIMAL = 25;
    const int MULTIPLIER = 703;

    // *** INPUT ***
    // This has the user input their height and validates the input
    printf("Enter your height (in inches): ");
    if (scanf("%d", &height) != 1 || height < MIN_HEIGHT || height > MAX_HEIGHT) {
        printf("Height must be between %d and %d.\n", MIN_HEIGHT, MAX_HEIGHT);
        return 0;
    }

    // This has the user input their weight and vaildates the input
    printf("Enter your weight (in pounds): ");
    if (scanf("%d", &weight) != 1 || weight < MIN_WEIGHT || weight > MAX_WEIGHT) {
        printf("Weight must be between %d and %d.\n", MIN_WEIGHT, MAX_WEIGHT);
        return 0;
    }

    // *** PROCESSING ***
    // This is where the bmi gets determined by muliplying the weight and the multiplier and dividing the outcome of height * height
    bmi = weight * MULTIPLIER / (height * height);

    // *** OUTPUT ***
    // This is where the bmi results gets displayed for the user
    printf("Your Body Mass Index (BMI) is %.1f.\n", bmi);

    // This area is where we are using if statements to determine the out come of if your overweight or not 
    // Once its decided the program displays the results to the user 
    if (bmi < MIN_OPTIMAL) {
        printf("You are underweight.\n");
    }
    else if (bmi <= MAX_OPTIMAL) {
        printf("You are at your optimal weight.\n");
    }
    else {
        printf("You are overweight.\n");
    }

    return 0;
} // end main()
