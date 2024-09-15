#include <bits/stdc++.h>
using namespace std;

int main()
{

    int test_case;
    cin >> test_case;

    for (int i = 0; i < test_case; i++)
    {
        stack<char> my_stack;

        string str;
        cin >> str;

        for (char c : str)
        {
            if (my_stack.empty())
            {
                my_stack.push(c);
            }
            else if (my_stack.top() != c)
            {
                my_stack.pop();
            }
            else
            {
                my_stack.push(c);
            }
        }

        if (my_stack.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}