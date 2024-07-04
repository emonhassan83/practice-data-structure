#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    long long int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    //* declare prefix sum array and calculate
    long long int prefix_sum[n];
    prefix_sum[0] = a[0];

    for (int i = 1; i < n; i++)
        prefix_sum[i] = prefix_sum[i - 1] + a[i];

    //* Print the prefix sum array in reverse order
    for (int i = n - 1; i >= 0; i--)
        cout << prefix_sum[i] << " ";

    return 0;
}