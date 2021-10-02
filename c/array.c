#include <iostream>
#include <stdio.h>
// Code include c and cpp so errors are seen
using namespace std;

int main()
{
    int A[5];
    A[0] = 1;
    A[1] = 2;
    A[2] = 3;
    cout << sizeof(A) << endl;
    cout << A[1] << endl;
    printf('%d\n', A[2]);

    return 0;
}