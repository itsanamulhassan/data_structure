#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v; // type 1 (initialization)

    // vector<int> v(5); // type 2 (initialization with size)

    vector<int> v(5, 5); // type 3 (initialization with size and default value)

    vector <int> v2(v); // type 4 (initialization and copy the value from the another vector)


    int a[4] = {1, 2, 3, 4};
    vector<int> v3(a, a + 4); // copy the value from the array

    vector <int> v4 ={2, 3, 4, 5};



    for(int i = 0; i < v4.size(); i++){
        cout << v4[i]<< " ";
    }
    cout << endl;


    cout << v4.size()<< endl;

return 0;
}