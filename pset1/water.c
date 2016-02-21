#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("minutes: ");
    int input = GetInt();
    int output = (input * 12);
    printf("bottles: %i\n", output);
}