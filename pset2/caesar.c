#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
    // if the user has not entered two arguments explain what they have to do
    if (argc != 2)
    {
        printf("You must enter a single integer argument for this program\n");
        printf("to work properly. For example: $./caesar 5\n");
        return 1;
    }
    
    // if the user has typed in two arguments convert argv[1] to an int
    int k = atoi(argv[1]);
    
    // get a string to be transalated from the user
    string message = GetString();
    
    // loop through the message
    for (int i = 0, n = strlen(message); i < n; i++)
    {
        char c = message[i];
        // if upper case
        if ( isupper( c ) )
        {
            // print converted letter 
            printf("%c", (char) ( ( ( ( c - 'A' ) + k ) % 26 ) + 'A' ) );
            
        }
        // if lower case
        else if ( islower( c ) )
        {
            // print converted letter
            printf("%c", (char) ( ( ( ( c - 'a' ) + k ) % 26 ) + 'a' ) );
        }
        // else if neither upper nor lower case
        else
        {
            printf("%c", c);
        }
    }
    
    // finish with a newline character
    printf("\n");
}
