#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
       v[i] = i+1;
    } 
    for(auto a: v){
        cout << a << " ";
    }

return 0;
}