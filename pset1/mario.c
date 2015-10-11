#include <stdio.h>
#include <cs50.h>

//Prompt the use for a positive integer no greater than 23
//Print a half pyramid of that height

int main(void)
{

    int height; // the height of the half pyramid
    
    // prompt the user for a positive integer no greater than 23
    // continue prompting until the user gives a valid answer
    do
    {
        printf("Please enter a positive integer n | n < 24 : ");
        height = GetInt();
    }
    while (height < 1 || height > 23);
    
    // use a loop to print height-index spaces and index '#' symbols
    for (int i = 1; i <= height; i++)
    {
        for (int j = i; j <= height; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
