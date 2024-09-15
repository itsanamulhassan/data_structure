#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, test_case;
    cin >> n >> test_case;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    };
    sort(a, a+n);

    for(int i = 0; i < test_case; i++){
       bool flag = false;
       int left = 0, right = n-1;
       int x;
       cin >> x;

       while(left <= right){
       int middle = (left + right) / 2;
       if(a[middle] == x){
        flag = true;
        break;
       }
       if(x > a[middle]){
        left = middle +1;

       } else if( x < a[middle]){
         right = middle -1;
       }

       }

        if(flag == true)cout << "found" <<endl;
        else cout << "not found" << endl;
    };



return 0;
}