#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        v.push_back(x);
    }

    int old_val, new_val;
    cin >> old_val >> new_val;

    replace(v.begin(), v.end(), old_val, new_val);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    int f;
    cin >> f;

    auto it = find(v.begin(), v.end(), f);
    if (it != v.end())
    {
        int index = it - v.begin();
        cout << index << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}