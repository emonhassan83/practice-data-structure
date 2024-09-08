#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        v.push_back(s);
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i][0] >= 'a' && v[i][0] <= 'z')
            v[i][0] = v[i][0] - 'a' + 'A'; //* convert to capitalized
    }

    for (int i = 0; i < n; i++)
        cout << v[i] << endl;

    return 0;
}