#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> my_list = {1, 2, 3, 4, 5};

    cout << *next(my_list.begin(), 2);

    return 0;
}