#include <stdio.h>
#include <cs50.h>
#include <string.h>


// this program allows you to see the length of a string
int main(void)
{
    string name = get_string("What's your name? ");

    int n = strlen(name);
    printf("%i\n" , n);
    

}