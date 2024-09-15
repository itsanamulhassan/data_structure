#include <bits/stdc++.h>
using namespace std;

void func(int *&p){
p = NULL;
}


int main()
{
    int value = 10;
    int *ptr = &value;
    func(ptr);
    cout<< ptr<< endl;


return 0;
}