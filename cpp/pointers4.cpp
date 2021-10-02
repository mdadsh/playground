#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    cout << sizeof(p1) << endl; // int have 4 byte but pointers always have 8 bytes in 64-bit arch
    cout << sizeof(p2) << endl; // char has 1 byte but pointers always have 8 bytes in 64-bit arch
    cout << sizeof(p3) << endl; // float has 4 byte but pointers always have 8 bytes in 64-bit arch
    cout << sizeof(p4) << endl;
    cout << sizeof(p5) << endl;

    return 0;
}