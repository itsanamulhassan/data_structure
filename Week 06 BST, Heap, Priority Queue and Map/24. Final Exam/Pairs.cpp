#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int value;

    Student(string name, int value)
    {
        this->name = name;
        this->value = value;
    }
};

bool cmp(Student a, Student b)
{
    if (a.name == b.name)
        return a.value > b.value;
    else
        return a.name < b.name;
}

int main()
{

    vector<Student> students_list;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int value;
        cin >> name >> value;
        students_list.push_back((Student(name, value)));
    }

    sort(students_list.begin(), students_list.end(), cmp);

    for (auto single_pair : students_list)
    {
        cout << single_pair.name << " " << single_pair.value << endl;
    }

    return 0;
}