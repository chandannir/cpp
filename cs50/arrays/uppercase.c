#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0; i < strlen(s); i++)
    {
        if( islower(s[i]))
        {
            printf("%c", toupper(s[i]));
        }
        else 
        {
            printf("%c", s[i]);
        }
    }
     printf("\n");
}