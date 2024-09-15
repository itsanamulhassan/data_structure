#include <bits/stdc++.h>
using namespace std;
int main()
{

    int test_case;
    cin >> test_case;
    for (int i = 0; i < test_case; i++)
    {
        int n;
        cin >> n;
        set<int> numbers;
        for (int j = 0; j < n; j++)
        {
            int value;
            cin >> value;
            numbers.insert(value);
        }

        for (int number : numbers)
        {
            cout << number << " ";
        }
        cout << endl;
    }

    return 0;
}