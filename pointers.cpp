#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 50;
    int *aptr;
    aptr = &a;
    cout << &a << endl;    // location of a
    cout << aptr << endl;  // value of aptr which is the location of a
    cout << a << endl;     // value of a
    cout << *aptr << endl; // dereferencing the pointer which gives value of a

    aptr++;
    cout << aptr << endl; // It prints address of a + 4 because integer value takes 4 bytes

    return 0;
}