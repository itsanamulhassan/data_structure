#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    cin.ignore();
    vector <string> v; // for push_back
    // vector <string> v(n); // for old way
    for(int i = 0; i < n; i++){
        string s;
        // cin >> s;
        getline(cin, s);
        v.push_back(s); // without initialized size
        // v[i] = s; // with initialized size
    }


    for(auto a: v){
       cout << a << endl;
    }


return 0;
}