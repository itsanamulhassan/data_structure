#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, test_case;
    cin >> n >> test_case;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int t = 0; t < test_case; t++){
    bool found = false;
    int q; 
    cin >> q;

    for(int i = 0; i < n; i++){
    if(a[i] == q){
        found = true;
        break;
    }
    }

    if(found)cout << "found" << endl;
    else cout << "not found" << endl;
    }



return 0;
}