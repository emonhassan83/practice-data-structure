#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    //* init prefix sum array
    int pre[n];
    pre[0] = a[0];

    //* calculate the prefix sum array
    for (int i = 1; i < n; i++)
        pre[i] = a[i] + pre[i - 1];

    //* printing the array
    for (int i = 0; i < n; i++)
        cout << pre[i] << " ";

    return 0;
}