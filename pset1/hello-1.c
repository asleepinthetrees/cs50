#include <stdio.h>
#include <cs50.h>

// This program asks for the user's name then prints out the string 
// hello, <name>

int main(void)
{
    printf("Your name please: ");
    string name = GetString();
    printf("hello, %s\n", name);
}
