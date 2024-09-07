#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int q;
    cin >> q;

    //* sorted array for using binary search
    sort(a, a + n);

    while (q--)
    {
        int x;
        cin >> x;

        bool flag = false;

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
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}