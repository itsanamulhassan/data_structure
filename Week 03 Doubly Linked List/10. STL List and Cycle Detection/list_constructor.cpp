#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> my_list(5);
    // int array_list[5] = {1, 2, 3, 4, 5};
    vector<int> vector_list = {2, 3, 4, 5, 6};
    list<int> list_list(10, 4);
    // list<int> my_list(array_list, array_list + 5);
    // list<int> my_list(vector_list.begin(), vector_list.end());
    list<int> my_list(list_list);
    // cout << my_list.front();

    for (auto it = my_list.begin(); it != my_list.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}