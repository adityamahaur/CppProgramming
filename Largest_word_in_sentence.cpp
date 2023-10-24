// Do the code again as there is no output showing and try to make the approach simpler

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    char arr[n + 1];
    cin.getline(arr, n);
    cin.ignore();

    int i = 0;
    int currlen = 0, maxlen = 0;

    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currlen > maxlen)
            {
                maxlen = currlen;
            }

            currlen = 0;
        }
        else
        {
            currlen++;
        }
        if (arr[1] == '\0')
        {
            break;
        }
        i++;
    }

    cout << maxlen << endl;
    return 0;
}