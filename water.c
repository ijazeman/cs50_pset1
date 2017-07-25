#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main()
{
    printf("Minutes:");
    int min;
    min = get_int();
    int showerOunce = min* 192;
    int bottles=  showerOunce / 16;
    printf("Bottles: %i", bottles);
}