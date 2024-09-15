#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> numbers;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        numbers.push(value);
    }

    int query;
    cin >> query;

    for (int i = 0; i < query; i++)
    {
        int command;
        cin >> command;
        if (command == 0)
        {
            int v;
            cin >> v;
            numbers.push(v);
            cout << numbers.top() << endl;
        }
        else if (command == 1)
        {
            if (!numbers.size())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << numbers.top() << endl;
            }
        }
        else if (command == 2)
        {

            if (!numbers.empty())
            {
                numbers.pop();
            }

            if (numbers.size())
            {
                cout << numbers.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}