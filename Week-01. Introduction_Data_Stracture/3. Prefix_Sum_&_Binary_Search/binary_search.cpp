#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int x;
    cin >> x;

    int l = 0, r = n - 1;

    bool flag = false;
    while (l <= r)
    {
        int mid_idx = (l + r) / 2;
        if (a[mid_idx] == x) //* if mid index match to find value then..
        {
            flag = true;
            break;
        }

        if (x > a[mid_idx]) //* if x is greater than mid index then move left
        {
            l = mid_idx + 1;
        }
        else //* if x is less than mid index then move right
        {
            r = mid_idx - 1;
        }
    }

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}