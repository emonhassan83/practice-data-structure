#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        //* check if array is sorted
        bool sorted = true;
        for (int i = 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
            {
                sorted = false;
                break;
            }
        }

        //* printing result by condition
        if (sorted)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}