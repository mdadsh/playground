#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int *p;
    //p = (int *)malloc(5 * sizeof(int)); // used in C to allocate space in heap
    p = new int[5]; // space allocation method in C++

    p[0] = 12;
    p[1] = 34;
    p[2] = 9;
    p[3] = 88;
    p[4] = 98;

    for (int i = 0; i < 5; i++)
        cout << p[i] << endl;

    delete[] p; // Deallocation of heap memory in C++
    //free(p); // Deallocation of heap memory in C
    return 0;
}