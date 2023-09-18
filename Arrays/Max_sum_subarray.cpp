// Brute force approach
// Time complexity is n^3 which is really bad and we need to reduce the time complexity in order to make
//  the code better.

/*
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxsum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            maxsum = max(maxsum, sum);
        }
    }

    cout << maxsum << endl;

    return 0;
}
*/

// Cumulative Sum Approach
//Code has error do it again laters

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int currsum[n + 1];
    currsum[0] = 0;

    for (int i = 1; i < n; i++)
    {
        currsum[i] = currsum[i - 1] + arr[i - 1];
    }

    int maxSUM = INT_MIN;

    for (int i = 1; i <= n; i++)
    {
        int sum = 0;

        for (int j = 0; j < i; j++)
        {
            sum = currsum[i] - currsum[j];
            maxSUM = max(sum, maxSUM);
        }
    }

    cout << maxSUM << endl;
    return 0;
}