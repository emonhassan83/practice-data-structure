#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 10;
    vector<int> v;

    for (int i = 1; i <= n; i++)
        v.push_back(i);

    cout << v.size() << endl;
    cout << v.capacity() << endl;
    cout << v.max_size() << endl;

    v.resize(20);
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    return 0;
}