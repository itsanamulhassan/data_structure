#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> x = {1, 2,3, 4, 5};
    vector <int> y = {1, 2,3};
    y = x; // if both vectors size are same size then the time complexity will be O(1). when initialized vector size is different then assign vector, the time complexity will be 0(N);
    y.push_back(30);
    y.pop_back();
    y.pop_back();
    y.pop_back();
    for(int i = 0; i< y.size(); i++){
        cout << y[i] << " ";
    }
        
return 0;
}