#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> a(n);
    for(int i = 0 ; i < n; i++){
        cin >> a[i];
    }
    vector <int> b(n);

    for(int i = 0 ; i < n; i++){
        cin >> b[i];
    }
    a.insert(a.begin(), b.begin(), b.end());

    for(auto x:a){
        cout << x << " ";
    }




   


return 0;
}