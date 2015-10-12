#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    // prompts a user for their name (using GetString to obtain their name as a 
    // string) and then outputs their initials in uppercase with no spaces or 
    // periods, followed by a newline (\n) 
    
    // Get the name from the user
    string name = GetString();
    
    // Return the first letter of name as an initial
    printf("%c", toupper( name[0] ) );

    // For each letter in name, if the prior letter is a space, return name[i]
    for(int i = 1, n = strlen(name) ; i < n; i++)
    {
        // if prior letter is space return the letter
        if ( name[i - 1] == ' ')
        {
            printf("%c", toupper( name[i] ) );
        }
        
    }
    printf("\n");

}
