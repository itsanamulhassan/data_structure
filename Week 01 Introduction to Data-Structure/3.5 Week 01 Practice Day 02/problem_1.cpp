// Problem-1: Running Sum of an Array
// Description:
// Given an array nums of integers, define a running sum of the array as runningSum[i] = sum(nums[0]…nums[i]). Write a C++ program to compute the running sum of the given array and print the result.
// Note: Solve this problem using function and Vector. 
// Input
// The first line contains an integer n representing the size of the array.
// The second line contains n integers representing the elements of the array nums.
// Output
// Print the running sum of the array as a sequence of integers separated by spaces.
// Example:
// Input
// Output
// 4
// 1 2 3 4
// 1 3 6 10

// Explanation:
// Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].




#include <bits/stdc++.h>
using namespace std;

vector <int> runningSum(vector <int> & nums){
    vector <int> c(nums.size());

    for(int i = 0; i < nums.size(); i++){
         if(i == 0){
            c[i] = nums[i];
        } else {
            c[i] = c[i-1] + nums[i];
        }
    }
    return c;

};
int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
   

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    vector <int> c = runningSum(v);

    for(auto x: c){
        cout << x << " " ;
    }

return 0;
}