#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <string> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    for(auto a:v){
       for(int i = 0; i < a.size();i++){
        if(i== 0){
            cout << char(a[i] - 32);
        }else {
             cout << a[i];
        }
       }
       cout << endl;
    }



return 0;
}