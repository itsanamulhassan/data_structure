#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, x;
    cin >> n;
    int a[n];
    for(int i = 0;  i < n; i++){
        cin >> a[i];
    }

    cin >> m;
    int b[m];
    for(int i = 0;  i < m; i++){
        cin >> b[i];
    }
    cin >> x;
    int result[n+m];

    for(int i = 0; i < x; i++){
    result[i] = a[i];
    }
    for(int i = 0; i < m; i++){
        result[x+i] = b[i];
    }
    for(int i = x; i < n; i++ ){
        result[m+i] = a[i];
    }

    for(int i = 0; i < m+n; i++){
        cout << result[i] << " ";
    }
 
return 0;
}