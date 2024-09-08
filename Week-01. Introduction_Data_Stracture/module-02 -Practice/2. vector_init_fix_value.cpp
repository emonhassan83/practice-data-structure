#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;

    int n = 5;
    vector<int> v(n, x);

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";

    return 0;
}