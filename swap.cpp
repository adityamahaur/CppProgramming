//Basic functionality of using call by reference over call by value as it is simpler to use and the function can be made easily. Video  number 29 Apna College C++ Placement couse.

#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 2;
    int b = 4;

    // int *aptr = &a;
    // int *bptr = &b;

    swap(&a, &b); //&a k bjaye aptr use kar skte h upar wale comments hata k same w b.
    cout << a << " " << b << endl;

    return 0;
}