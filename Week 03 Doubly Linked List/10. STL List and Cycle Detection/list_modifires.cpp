#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> my_list = {10, 20, 30};
    list<int> new_list = {40, 50, 60};

    // new_list = my_list;
    new_list.assign(my_list.begin(), my_list.end());
    new_list.pop_back();
    new_list.push_back(3);
    new_list.push_front(222);

    // new_list.insert(next(new_list.begin(), 2), 400);
    my_list.insert(my_list.begin(), new_list.begin(), new_list.end());
    // my_list.erase(next(new_list.begin(), 2));
    // my_list.erase(next(my_list.begin(), 2), next(my_list.begin(), 5));

    for (int value : my_list)
    {
        cout << value << " ";
    }

    auto it = find(my_list.begin(), my_list.end(), 30);

    if (it == my_list.end())
    {
        cout << "not found" << endl;
    }
    else
    {
        cout << "found" << endl;
    }

    return 0;
}