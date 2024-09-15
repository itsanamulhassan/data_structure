#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);

   

    int test_case;
    cin >> test_case;
    for(int i = 0 ; i < test_case; i++){
        int x;
        cin >> x;
        int left = 0, right = n-1;
        bool flag = false;
        while(left <= right){
            int middle = (left + right) /2;
            if(a[middle] == x){
            flag= true;
            break;
            }
            if(x > a[middle]){
                left = middle +1;
            } else if(x < a[middle]){
                right = middle -1;
            }
        }
        if(flag == true) cout << "YES" << endl;
        else cout << "NO" << endl;

    }

return 0;
}