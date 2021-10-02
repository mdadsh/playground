#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    //struct rectangle area = {5, 10}; // static assignment
    //struct Rectangle *p = &area; // pointer for reference
    //struct Rectangle *p; // pointer assignment in C
    Rectangle *p; // pointer assignment in C++
    //p = (struct Rectangle *)malloc(sizeof(struct Rectangle)); // dynamic allocation in C
    p = new Rectangle; // dynamic allocation in C++
    p->length = 15;
    p->breadth = 7;

    //cout << p->length << endl;
    //cout << p->breadth << endl;
    cout << "Area of Rectangle is " << p->length * p->breadth << endl;

    return 0;
}