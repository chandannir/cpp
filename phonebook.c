#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Chandan", "Manjender"};
    string numbers[] = {"613-869-9124", "613-600-0329"};

    string name = get_string("Name: ");

    for(int i = 0; i < 2; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not found\n");
    return 1; 
}
