#include <bits/stdc++.h>
using namespace std;

vector<int> prefixSum(vector<int> v)
{
    //* create and initialize prefix sum vector
    vector<int> pre(v.size());
    pre[0] = v[0];

    //* calculate prefix sum vector
    for (int i = 1; i < v.size(); i++)
        pre[i] = v[i] + pre[i - 1];

    return pre;
}

int main()
{
    int n;
    cin >> n;

    //* take input vector
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    vector<int> res = prefixSum(v); //* receive from prefix sum vector

    //* print prefix sum vector
    for (int i = 0; i < n; i++)
        cout << res[i] << " ";

    return 0;
}