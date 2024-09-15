#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, q;
    cin >> n >> q;
    vector <long long int> v(n);
    vector <long long int> prefix_sum(n);
    
    for(int i = 0; i< n; i++){
        cin >> v[i];
        if(i == 0){
        prefix_sum[i] = v[i] ;
        }else {
        prefix_sum[i] = prefix_sum[i-1] + v[i] ;
        }
    }

    for(int i = 0; i < q; i++){
        long long int  l, r;
        long long int sum = 0; 
        cin >> l >> r;
        if( l == 0 || l == 1){
            sum = prefix_sum[r-1];
        }else {
        sum = prefix_sum[r-1] - prefix_sum[l-2];
        }
             
        cout << sum << endl;
    }


return 0;
}