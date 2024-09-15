
// Problem 2: Equilibrium Index 
// Description: Given an array of integers, find the equilibrium index. An equilibrium index is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes.
// Example:
// Input
// Output
// 7
// -7 1 5 2 -4 3 0
// 3


// Explanation: At index 3, the sum of elements before it is -1 and after it is also -1

// -7
// 1
// 5
// 2
// -4
// 3
// 0

//  	0	   1		2		3		4		5		6
// Sum of before index 3  = -7 + 1 + 5 = -1
// Sum of after index    3	  = -4 + 3 + 0 = -1


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    vector <int> prefix_sum(n);

    for(int i = 0; i< n; i++){
        cin>> v[i];
        if(i == 0){
            prefix_sum[i] = v[i];
        }else{
            prefix_sum[i] = prefix_sum[i-1] + v[i];
        }
    }

    int total_sum = prefix_sum.back();
    int equilibrium_index = -1;
    for (int i = 0; i < n; i++){
        int left_sum;
        if(i == 0){
            left_sum = 0;
        }else{
           left_sum = prefix_sum[i-1];
        }
        int right_sum = total_sum - prefix_sum[i ];
        if(left_sum == right_sum){
            equilibrium_index = i;
            break;
        }
    }
    cout << equilibrium_index << endl;
return 0;
}

