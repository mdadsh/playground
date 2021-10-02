#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get input from user
    int x = get_int("x: ");
    int y = get_int("y: ");

    // Return the result
    printf("%i\n", x + y);
}