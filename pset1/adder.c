#include <stdio.h>
#include <cs50.h>

// This program asks for integers x and y and returns their sum

int main(void)
{
    printf("Integer x please: ");
    int x = GetInt();
    
    printf("Integer y please: ");
    int y = GetInt();
    
    printf("The sum of %d and %d is %d\n", x, y, x + y);
}
