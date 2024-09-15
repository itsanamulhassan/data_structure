#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count =0;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(auto a: v){
        auto it = find(v.begin(), v.end(), a+1);
        if(it != v.end()){
            count++;
        }
    }
    cout << count << endl;

return 0;
}