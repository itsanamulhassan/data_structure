#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n;
    int a[n];
     
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> x;

    int left = 0, right = n-1;
    bool available = false;

    while(left <= right){
        int middle = (left+right)/ 2;
        if(a[middle] == x){
            available = true;
            break;
        }
        if( x > a[middle]){
            left = middle+1;

        } else if( x < a[middle]){
            right = middle -1;
        }
    }

    if(available == true)cout << "YES" <<endl;
    else cout << "NO" << endl;


return 0;
}