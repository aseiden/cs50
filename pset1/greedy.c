#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float input;
    int total_coins = 0;
    
    do {
        printf("How much change do you need?\n");
        input = GetFloat();
    } while (input < 0);
    
    int input_converted = round(input * 100);
    
    while (input_converted > 24)
    {
        input_converted = input_converted - 25;
        total_coins = total_coins + 1;
    }
    
    while (input_converted > 9)
    {
        input_converted = input_converted - 10;
        total_coins = total_coins +1;
    }
    
    while (input_converted > 4)
    {
        input_converted = input_converted - 5;
        total_coins = total_coins +1;
    }
    
    while (input_converted > 0)
    {
        input_converted = input_converted - 1;
        total_coins = total_coins + 1;
    }
    
    printf("%i\n", total_coins);

}