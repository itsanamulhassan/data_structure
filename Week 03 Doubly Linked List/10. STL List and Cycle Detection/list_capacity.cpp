#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> my_list = {1, 2, 3, 4, 5};
    my_list.resize(3);
    my_list.resize(5, 100);
    for (int value : my_list)
    {
        cout << value << " ";
    }
    cout << endl;
    cout << "is_empty: " << my_list.empty() << endl;
    // my_list.clear();
    cout << "is_empty: " << my_list.empty() << endl;

    cout << my_list.size() << endl;
    // cout << my_list.max_size() << endl;
}