#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30};
    cout << *arr << endl;

    int *ptr = arr;
    for (int i = 0; i < 3; i++)
    {
        cout << *(arr + i) << endl; //arr is an indexing pointer which points to the initial index of the array and thats why we add just i and not 4i because its not pointing to the memory location but the index
        // arr++; //illegal
    }

    return 0;
}