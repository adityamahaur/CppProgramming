//SOLVE AGAIN
//2 pointer approach


#include <iostream>
#include <climits>
#include <algorithm>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // taking the array
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // defining idx[]
    const int N = 1e6 + 2;
    vector<int> idx(N, -1);
    // for (int i = 0; i < N; i++)
    // {
    //     idx[i] = -1;
    // }

    int minidx = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (idx[arr[i]] != -1)
        {
            minidx = min(minidx, idx[arr[i]]);
        }
        else
        {
            idx[arr[i]] = i;
        }
    }

    if (minidx == INT_MAX)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << minidx << endl;
    }
    return 0;
}