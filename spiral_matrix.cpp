/* Print the following matrix in spiral order (n=5,m=6)
    1  5  7  9 10 11
    6 10 12 13 20 21
    9 25 29 30 32 41
   15 55 59 63 68 70
   40 70 79 81 95 105
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;

    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    // Spiral Order Print

    int row_start = 0;
    int row_end = n - 1;
    int col_start = 0;
    int col_end = m - 1;

    while (row_start <= row_end && col_start <= col_end)
    {
        // for row start
        for (int col = col_start; col <= col_end; col++)
        {
            cout << a[row_start][col] << " ";
        }
        row_start++;

        // for col end
        for (int row = row_start; row <= row_end; row++)
        {
            cout << a[row][col_end] << " ";
        }
        col_end--;

        // for row end
        for (int col = col_end; col >= col_start; col--)
        {
            cout << a[row_end][col] << " ";
        }
        row_end--;

        // for col start
        for (int row = row_end; row >= row_start; row--)
        {
            cout << a[row][col_start] << " ";
        }
        col_start++;
    }

    /* These statements need to be modified and added to the code to complete it. Look into this later on
       if((columns_end==columns_start)&&(row_end!=row_start)){
            for(int i=row_start;i<=row_end;i++){
                cout<<arr[i][columns_start]<<"  ";
            }}
            if((columns_end!=columns_start)&&(row_end==row_start)){
                for(int i=columns_start;i<=columns_end;i++){
                    cout<<arr[row_start][i]<<"  ";
                }
            }
            if((columns_end==columns_start)&&(row_end==row_start)){
                cout<<arr[row_start][columns_start];
            }
    */
    return 0;
}