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
            if (my_stack.empty() || !(my_stack.top() == '0' && c == '1'))
            {
                my_stack.push(c);
            }
            else
            {
                my_stack.pop();
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