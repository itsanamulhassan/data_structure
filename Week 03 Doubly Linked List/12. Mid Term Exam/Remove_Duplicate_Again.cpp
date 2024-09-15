#include <bits/stdc++.h>
using namespace std;
int main()
{

    list<int> numbers_list;
    int value;

    while (true)
    {
        cin >> value;

        if (value == -1)
        {
            break;
        }
        else
        {
            numbers_list.push_back(value);
        }
    }

    numbers_list.sort();
    numbers_list.unique();

    for (auto value : numbers_list)
    {
        cout << value << " ";
    }

    return 0;
}