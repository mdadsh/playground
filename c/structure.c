#include <stdio.h>

//Define playing card strucutre
struct Card
{
    int face;  //value of the card
    int shape; //shape of the card as in heart, spade etc
    int color; //Color of the card as in black or red
};             // Can also be declared here before semicolon

//Cam also be declared outside of function
struct Card c1, c2, c3;

int main()
{
    // Only declare
    struct Card c;
    {
        c.face = 1;  // 1 for Ace and so on .... 12 for Queen and 13 for King
        c.shape = 0; // 0 for Spade and so on
        c.color = 0; // 0 for black and 1 for red
    };

    // Declare and assign
    struct Card c =
        {
            1,
            0,
            0};
}