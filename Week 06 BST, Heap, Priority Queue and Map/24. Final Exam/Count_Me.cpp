#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    cin.ignore();

    for (int i = 0; i < test_case; i++)
    {
        string sentence;
        getline(cin, sentence);
        string word;
        stringstream sentence_stream(sentence);
        map<string, int> my_map;
        pair<string, int> my_pair("", 0);

        while (sentence_stream >> word)
        {
            my_map[word]++;
            if (my_map[word] > my_pair.second)
            {
                my_pair.second = my_map[word];
                my_pair.first = word;
            }
        }

        cout << my_pair.first << " " << my_pair.second << endl;
    }

    return 0;
}