#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int first_side;
    do
    {
        printf("first side of tri:");
        first_side = get_float(" ");
    }
    while(first_side <= 0);

    int second_side;
    do
    {
        printf("second side of tri:");
        second_side = get_float(" ");
    }
    while(second_side <= 0);

    int third_side;
    do
    {
        printf("third side of tri:");
        third_side = get_float(" ");
    }
    while(third_side <= 0);

    if(first_side + second_side > third_side & first_side + third_side > second_side & second_side + third_side > first_side)
    {
        printf("your triangle is valid\n");
    }
    else
    {
        printf("your triangle is not valid\n");
    }
    return 0;
}