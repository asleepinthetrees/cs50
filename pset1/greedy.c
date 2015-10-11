#include <stdio.h>
#include <cs50.h>
#include <math.h>

// This program uses a 'greedy' algorithm to calculate the minimum number of
// coins it would take to return the customer's change

int main(void)
{
    float change;
    int totalCoins = 0;
    
    // ask the user for change input
    // make sure that change is a positive number   
    do
    {
        printf("Please enter the amount of change owed: ");  
        change = GetFloat();
    }
    while (change < 0);
    
    // multiply by 100 and convert to int, so that only cents
    // this line was by far the most troublesome. The trick was to use 
    // round which returns a double
    int intChange = (int) round(change * 100);
    
    // Take care of quarters
    while (intChange - 25 >= 0)
    {
        intChange = intChange - 25;
        totalCoins++;
    }
    
    // Take care of dimes
    while (intChange - 10 >= 0)
    {
        intChange = intChange - 10;
        totalCoins++;
    }
    
    // Take care of nickels
    while (intChange - 5 >= 0)
    {
        intChange = intChange - 5;
        totalCoins++;
    }
    
    // Take care of pennies
    while (intChange - 1 >= 0)
    {
        intChange = intChange - 1;
        totalCoins++;
    }
    
    printf("%d\n", totalCoins);
    
}
