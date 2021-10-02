#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input: ");
    printf("Output: ");
    for (int i = 0, n = strlen(s); i < n; i++) // Can also be done with s[i] != '\0'
    {
        printf("%c", s[i]);
    }
    printf("\n");
}