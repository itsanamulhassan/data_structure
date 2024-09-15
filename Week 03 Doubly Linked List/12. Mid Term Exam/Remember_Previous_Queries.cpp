#include <iostream>
#include <list>

using namespace std;

void print_linked_list(list<int> &numbers)
{
    cout << "L -> ";
    auto it = numbers.begin();
    while (it != numbers.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;
}

void print_linked_list_reverse(list<int> &numbers)
{
    cout << "R -> ";
    auto it = numbers.end();
    it--;
    while (true)
    {
        if (!numbers.size())
        {
            break;
        }
        cout << *it << " ";
        if (it == numbers.begin())
        {
            break;
        }
        it--;
    }
    cout << endl;
}

int main()
{
    list<int> numbers;
    int query;
    cin >> query;

    for (int i = 0; i < query; i++)
    {
        int position, value;
        cin >> position >> value;
        if (position == 0)
        {
            numbers.push_front(value);
        }
        else if (position == 1)
        {
            numbers.push_back(value);
        }
        else if (position == 2)
        {
            if (value >= 0 && value < numbers.size())
            {
                auto it = next(numbers.begin(), value);
                numbers.erase(it);
            }
        }
        print_linked_list(numbers);
        print_linked_list_reverse(numbers);
    }

    return 0;
}
