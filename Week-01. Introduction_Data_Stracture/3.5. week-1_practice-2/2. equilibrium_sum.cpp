#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    int total_sum = 0,
        left_sum = 0;

    //* take input the vector and calculate the total sum
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        total_sum += v[i];
    }

    for (int i = 0; i < n; i++)
    {
        total_sum -= v[i]; //* subtract the current element from total sum to get the right sum

        if (left_sum == total_sum)
        {
            cout << i << endl;
            return 0;
        }

        //* update the leftSum by adding the current element
        left_sum += v[i];
    }

    cout << "No index found" << endl;
    return 0;
}