#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char* argv[])
{
    // if the user has not entered two arguments explain what they have to do
    if (argc != 2)
    {
        printf("You must enter a single string argument for this program\n");
        printf("to work properly. For example: $./vigenere bacon\n");
        return 1;
    }
    
    // check that argv[1] uses only alphabetic characters
    // simultaneously convert string for use in vigenere
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        // check if character is not alphabetic
        if ( !isalpha( argv[1][i] ) )
        {
            printf("You must enter a string of alphabetic characters\n");
            printf("For example: $./vigenere bacon\n");
            return 1;
        } 
        // if it is alphabetic, change to lower case
        else
        {
            argv[1][i] = tolower(argv[1][i]);
        }
    }
    
    // rename argv[1] to key for readability
    string key = argv[1];
    
    // define key length for use in function
    int kLen = strlen(key);
    
    // if everything is good, ask for input from the user
    string message = GetString();
    
    // keep track of keyindex
    int kIndex = 0;
    
    // loop through the message
    for (int i = 0, n = strlen(message); i < n; i++)
    {
        char c = message[i];
        // if upper case
        if ( isupper( c ) )
        {
            // print converted letter 
            printf("%c", (char)( ( ( ( c - 'A' ) + ( key[kIndex] - 'a' ) ) % 26 ) + 'A' ) );
            // increment k index
            kIndex = ( kIndex + 1 ) % kLen;
        }
        // if lower case
        else if ( islower( c ) )
        {
            // print converted letter
            printf("%c", (char)( ( ( ( c - 'a' ) + ( key[kIndex] - 'a' ) ) % 26 ) + 'a' ) );
            // increment k index
            kIndex = ( kIndex + 1 ) % kLen;
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
