#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    //* loop through each row
    for (int i = 0; i < n; i++)
    {
        //* loop through each column
        for (int j = 0; j < n; j++)
        {
            if (i == j && i == n / 2) //* center 'X'
                cout << 'X';
            else if (i == j) //* top-left to bottom-right '\'
                cout << '\\';
            else if (i + j == n - 1) //* top-right to bottom-left '/'
                cout << '/';
            else //* fill up with spaces
                cout << ' ';
        }
        cout << endl;
    }
    return 0;
}