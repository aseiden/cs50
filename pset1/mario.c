#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int input;
    
    do {
        printf("Height: ");
        input = GetInt();
    } while ((input < 0) || (input > 23));

    for (int i = 0; i < input; i++)
    {
        for (int n = 0; n < (input - (i + 1)); n++)
        {
            printf(" ");
        }
        for (int n = 0; (n < (i + 1)); n++)
        {
            printf("#");
        }
        printf("#\n");
    }

}