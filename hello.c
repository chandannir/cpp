#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string answer = get_string("Whats your name? ");
    printf("hello, %s\n", answer);
}