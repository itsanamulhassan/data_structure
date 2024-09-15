#include <bits/stdc++.h>
using namespace std;
int main()
{ int n, x;
cin >> n;
int a[n];
for(int i = 0; i < n; i++){
    cin>> a[i];
}
cin >> x;
bool flag = false;
int left = 0, right = n-1;
while(left <= right){
    int middle =  (left + right) / 2;
    if(a[middle] == x){
         if(a[middle+1] == x || a[middle-1] == x){
            flag = true;
            break;
         }
    }
    if(x > a[middle]){
        left = middle+1;
    } else if( x < a[middle]){
        right = middle -1;
    }
}
if(flag == true) cout << "true" <<endl;
else cout << "false" << endl;

return 0;
}