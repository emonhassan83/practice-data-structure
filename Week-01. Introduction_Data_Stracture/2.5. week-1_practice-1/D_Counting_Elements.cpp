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

    int cnt = 0;
    for (int i = 0; i < n; i++) //* total: O(n^2) complexity
    {
        auto it = find(v.begin(), v.end(), v[i] + 1);

        if (it != v.end())
            cnt++;
    }
    cout << cnt << endl;

    return 0;
}