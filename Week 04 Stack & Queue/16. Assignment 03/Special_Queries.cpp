#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_case;
    cin >> test_case;
    queue<string> line;

    for (int i = 0; i < test_case; i++)
    {
        int number;
        string name;
        cin >> number;

        if (number == 0)
        {
            cin >> name;
            cin.ignore();
            line.push(name);
        }
        else
        {
            if (!line.empty())
            {
                cout << line.front() << endl;
                line.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}