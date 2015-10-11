#include <stdio.h>
#include <cs50.h>
#include <math.h>

// This is some simple code which experiments with the round function

int main(void)
{
    printf("Please enter a number to experiment with: ");
    float number = GetFloat();
    printf("Your number to the twentieth digit is:\n");
    printf("%.20f\n", number);
    printf("Your number rounded using the round function is:\n");
    printf("%.20f\n", round(number));
    printf("Your number multiplied by 100 and then rounded is:\n");
    printf("%.20f\n", round(number * 100));
}
