#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> my_list = {1, 2, 3, 4, 5, 6, 7, 8, 10};
    list<int> new_list = {5, 3, 10, 4, 1, 2, 2, 6, 3, 6, 7, 8, 9};

    // my_list.remove(1);
    new_list.sort(less<int>());
    // new_list.unique();
    new_list.reverse();
    for (auto value : new_list)
    {
        cout << value << " ";
    }

    return 0;
}