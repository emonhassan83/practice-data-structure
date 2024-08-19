#include <iostream>
#include <list>
using namespace std;

void print_linked_list(list<int> lst)
{
    //* printing forward
    cout << "L -> ";
    for (auto it = lst.begin(); it != lst.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    //* printing reverse
    cout << "R -> ";
    auto it = lst.end();
    while (it != lst.begin())
    {
        --it;
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
                auto it = dll.begin();
                for (int j = 0; j < v; ++j)
                {
                    ++it;
                }
                dll.erase(it);
            }
        }

        print_linked_list(dll);
    }

    return 0;
}
