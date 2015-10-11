#include <stdio.h>
#include <cs50.h>

// This program uses a switch statement to analyze a number between 1 and 10

int main(void)
{
    printf("Please enter a number between 1 and 10: ");
    
    int n = GetInt();
    
    switch (n)
    {
        case 1:
        case 2:
        case 3:
            printf("You picked a small number\n");
            break;
        
        case 4:
        case 5:
        case 6:
        case 7:
            printf("You picked a mid sized number\n");
            break;
        
        case 8:
        case 9:
        case 10:
            printf("You picked a large number\n");
            break;
        default: 
            printf("That is not a number between 1 and 10\n");
            break;
    }
}
