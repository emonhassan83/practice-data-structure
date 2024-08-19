#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> linkedList;
    int val;

    //* take input values until -1 found
    while (cin >> val && val != -1)
    {
        linkedList.push_back(val);
    }

    //* sort the list for remove duplicates
    linkedList.sort();

    //* remove duplicates from the list
    linkedList.unique();

    for (int value : linkedList)
    {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
