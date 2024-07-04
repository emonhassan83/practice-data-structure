#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int ar[] = {10, 20, 30, 40, 50};
    // vector<int> v = {10, 20, 30, 40, 50};

    // // cout << v.size() << endl;
    // v.push_back(60);
    // cout << v.size() << endl;

    vector<int> v = {10, 20, 30, 40, 50};
    vector<int> v2 = {100, 200, 300, 400, 500};

    // v.insert(v.begin() + 3, 3, 35);
    v.insert(v.begin(), v2.begin() + 1, v2.end() - 1);

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    return 0;
}