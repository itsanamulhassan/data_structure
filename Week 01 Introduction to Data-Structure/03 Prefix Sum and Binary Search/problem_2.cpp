#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int a[n];
    int left_sum[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(i == 0){
             left_sum[i] = 0;
        }else {
            left_sum[i] = left_sum[i-1] + a[i-1];
        }
       
    }

     for(int i = 0; i < n; i++){
        cout << left_sum[i] << " ";       
    }

return 0;
}