#include <stdio.h>
#include <cs50.h>

const int n = 3;
float average(int array[]);

int main(void)
{
    int scores[n];
    for(int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("Average: %f\n", (scores[0] + scores[1] + scores[2] / (float) 3));
}

float average(int array[])
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    return sum / (float) n;
    
    
}