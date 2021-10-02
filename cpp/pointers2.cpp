#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int A[5] = {2, 4, 6, 8, 10};
    int *p; // p can be used as an iterator
    p = A;

    for (int i = 0; i < 5; i++)
        cout << A[i] << endl; // Can also use p instead of A to loop using pointer

    return 0;
}