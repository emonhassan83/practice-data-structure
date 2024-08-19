#include <iostream>
#include <list>
using namespace std;

void print_forward(list<int> lst)
{
    cout << "L -> ";
    for (int val : lst)
    {
        cout << val << " ";
    }
    cout << endl;
}

void print_reverse(list<int> lst)
{
    cout << "R -> ";
    auto it = lst.end();
    while (it != lst.begin())
    {
        it--;
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    int q;
    cin >> q;

    list<int> dll; //* Doubly linked list

    for (int i = 0; i < q; ++i)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0) //* insert at head
        {
            dll.push_front(v);
        }
        else if (x == 1) //* Insert at tail
        {
            dll.push_back(v);
        }
        else if (x == 2) //* Delete at index v
        {
            if (v >= 0 && v < dll.size())
            {
                dll.erase(next(dll.begin(), v));
            }
        }

        print_forward(dll);
        print_reverse(dll);
    }

    return 0;
}
