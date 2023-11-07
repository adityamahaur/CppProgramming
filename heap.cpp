#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;         // stored in stack
    int *p = new int(); // allocating memory in heap with new operator
    *p = 10;
    delete (p);     // deallocating memory in heap
    p = new int[4]; // storing array in a heap and we can change the size of array at compile time so its an advantage of using dynamic memory allocation
    delete[] p;     // deallocating an array from the heap
    p = NULL;       // now we are removing the pointer p by giving it NULL value
    /* P is given a NULL value to avoid memory leak and it is a good practice to take care of while developing applications and it allows apps to use less memory and be easy to use for low power computers as well*/
    return 0;
}