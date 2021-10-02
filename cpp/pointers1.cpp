#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a = 10;
    int *p;
    p = &a;

    cout << a << endl;
    printf("using pointer %d", *p); // if you dont use * then it will print memory address

    return 0;
}