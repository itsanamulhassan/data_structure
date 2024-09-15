#include <bits/stdc++.h>
using namespace std;
int main()
{
   int test_case; 
   cin>> test_case;
   for(int t = 0; t < test_case; t++ ){
     int n;
    cin >> n;
    int a[n];
    int c[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        c[i] = a[i];
    }
    sort(c, c+n);

    bool flag = true;
    for(int i = 0; i < n; i++){
        if(a[i] != c[i]){
            flag = false ;
            break;
        }
    }
    if(flag == true) cout << "YES" << endl;
    else cout << "NO" << endl;
   }

return 0;
}