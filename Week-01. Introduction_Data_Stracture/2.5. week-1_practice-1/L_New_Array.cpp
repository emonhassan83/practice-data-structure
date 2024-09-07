#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        v1.push_back(x);
    }

    vector<int> v2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        v2.push_back(x);
    }

    vector<int> ans;
    ans.insert(ans.end(), v2.begin(), v2.end());
    ans.insert(ans.end(), v1.begin(), v1.end());

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}