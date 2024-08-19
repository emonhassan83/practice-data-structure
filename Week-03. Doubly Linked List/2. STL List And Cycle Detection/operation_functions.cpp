#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {20, 40, 30, 10, 50, 10, 10};
    // myList.remove(10); //* O(N)
    //  myList.sort(); //* O(NlogN)
    //  myList.sort(greater<int>()); //* O(NlogN)
    //  myList.unique(); //* O(N), with sort O(NlogN)
     myList.reverse(); //* O(N)


    for (int val : myList)
    {
        cout << val << endl;
    }
    return 0;
}