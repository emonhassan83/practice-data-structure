#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    vector<int> v(26, 0); //* creates a vector with 26 elements

    for (char c : s)
    {
        v[c - 'a']++; //* convert number [c - 'a'] and vector value increment
    }

    for (int i = 0; i < 26; i++)
    {
        if (v[i] > 0) //* if vector value is gether than 0
            cout << char(i + 'a') << " : " << v[i] << endl;
    }

    return 0;
}