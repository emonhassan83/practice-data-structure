#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int m;
    cin >> m;

    vector<int> b(m);
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int x;
    cin >> x;

    //* insert array b into array a at index x
    a.insert(a.begin() + x, b.begin(), b.end());

    //* print the final array a
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";

    return 0;
}