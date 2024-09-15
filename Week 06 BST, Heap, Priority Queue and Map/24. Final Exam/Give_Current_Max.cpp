#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks == b.marks)
        {
            return a.roll >= b.roll;
        }
        else
        {
            return a.marks < b.marks;
        }
    }
};

int main()
{
    priority_queue<Student, vector<Student>, cmp> students_list;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll;
        int marks;
        cin >> name >> roll >> marks;
        students_list.push(Student(name, roll, marks));
    }
    int query;
    cin >> query;

    for (int i = 0; i < query; i++)
    {
        int command;
        cin >> command;
        if (command == 0)
        {
            string name;
            int roll;
            int marks;
            cin >> name >> roll >> marks;
            students_list.push(Student(name, roll, marks));
            cout << students_list.top().name << " " << students_list.top().roll << " " << students_list.top().marks << endl;
        }
        else if (command == 1)
        {
            if (!students_list.size())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << students_list.top().name << " " << students_list.top().roll << " " << students_list.top().marks << endl;
            }
        }
        else if (command == 2)
        {
            if (!students_list.empty())
            {
                students_list.pop();
            }

            if (students_list.size())
            {
                cout << students_list.top().name << " " << students_list.top().roll << " " << students_list.top().marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}