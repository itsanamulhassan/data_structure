#include <bits/stdc++.h>
using namespace std;
int main()
{

    // priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> pq;

    while (true)
    {
        int command;
        cin >> command;
        if (command == 0)
        {
            int x;
            cin >> x;
            pq.push(x); // O (logN)
        }
        else if (command == 1)
        {
            pq.pop(); // O (logN)
        }
        else if (command == 2)
        {
            cout << pq.top() << endl; // O (1)
        }
        else
        {
            break;
        }
    }

    return 0;
}