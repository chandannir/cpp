#include <stdio.h>

int main(void)
{
    char *s = "HI!";
    printf("%s\n",  s);
    printf("%p\n", &s[2]);
}