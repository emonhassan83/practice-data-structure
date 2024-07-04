#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> x = {10, 20, 30};
    // vector<int> v = {1, 2, 3};

    x.pop_back();
    // v = x;

    for (int i = 0; i < x.size(); i++)
        cout << x[i] << " ";

    return 0;
}