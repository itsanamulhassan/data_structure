#include <bits/stdc++.h>
using namespace std;

class my_stack
{
public:
    vector<int> values;
    void push(int value)
    {
        values.push_back(value);
    }
    void pop()
    {
        values.pop_back();
    }
    int top()
    {
        return values.back();
    }
    int size()
    {
        return values.size();
    }
    bool empty()
    {
        if (values.size() == 0)
            return true;
        else
            return false;
    }
};
int main()
{

    my_stack values;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        values.push(value);
    }

    while (values.empty() == false)
    {
        cout << values.top() << " ";
        values.pop();
    }

    return 0;
}