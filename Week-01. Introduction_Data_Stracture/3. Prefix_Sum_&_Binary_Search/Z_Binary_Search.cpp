#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    //* sorted array for using binary search
    sort(a, a + n);

    while (q--)
    {
        int x;
        cin >> x;

        bool flag = false;
        // for (int i = 0; i < n; i++)
        // {
        //     if (a[i] == x)
        //     {
        //         flag = true;
        //         break;
        //     }
        // }

        //* binary search implement
        int l = 0, r = n - 1;
        while (l <= r) //* O(logN)
        {
            int mid_idx = (l + r) / 2;
            if (a[mid_idx] == x)
            {
                flag = true;
                break;
            }

            if (x > a[mid_idx])
                l = mid_idx + 1;
            else
                r = mid_idx - 1;
        }

        if (flag)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }

    return 0;
}