#include <bits/stdc++.h>
using namespace std;
int main()
{
    // // A way to take input for vector
    // int n;
    // cin >> n;
    // vector <int> v;
    // for(int i  = 0; i < n; i++){
    //     int x;
    //     cin>> x;
    //     v.push_back(x);
    // }

    // for(auto a:v){
    //     cout << a << " ";
    // }


    // another alternative way to take input for vector
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i  = 0; i < n; i++){
       cin >> v[i];
    }

    for(auto a:v){
        cout << a << " ";
    }


return 0;
}