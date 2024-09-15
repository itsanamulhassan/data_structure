#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v = {20, 40, 60};
    vector <int> x = {200, 40, 600};
    v.insert(v.begin()+2, x.begin(), x.end());
    // v.erase(v.begin()+ 1, v.begin()+ 3);

    // replace(v.begin(), v.end(), 40, 400);

    // vector <int>::iterator it; // Old way

    auto it = find(v.begin(), v.end(), 40);
    // cout << *it << endl;

   if(it == v.end()) cout << "Not Found" << endl;
   else cout << "Found" << endl;

    // for(int digit: v){
    //     cout << digit << " ";
    // }

return 0;
}