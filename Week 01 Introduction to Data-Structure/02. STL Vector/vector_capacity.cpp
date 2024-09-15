#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    // cout << v.max_size() << endl;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    // v.clear();
    v.resize(3); // resize the vector array size
    v.resize(10, 33); // resize the vector array with default value for others incremented index 

    // cout <<v.capacity() << endl;
    for(int i = 0; i< v.size(); i++){
        cout << v[i] << " ";
    }


    //  cout << v[4] << endl;
    // cout << v.empty() << endl;







return 0;
}