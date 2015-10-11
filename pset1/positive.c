#include <stdio.h>
#include <cs50.h>

// this program ues a do while to ensure that the user types in a positive integer

int main(void)
{
    int n;
    do 
    {
        printf("Please enter a positive integer: ");
        n = GetInt();
    } 
    while(n < 1);
    
    printf("Thank you for the positive integer\n");
}
