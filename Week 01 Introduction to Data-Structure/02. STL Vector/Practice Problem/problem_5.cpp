#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, target_val, replace_val, find_val, find_index;
    cin >> n;
    vector <int> old_val(n);
    
    for(int i = 0; i < n; i++){
        cin >> old_val[i];
    }

    cin >> target_val>>replace_val;
    cin >> find_val;

    vector <int> new_val(old_val);

    replace(new_val.begin(),new_val.end(), target_val, replace_val);

    for(auto a: new_val){
        cout << a << " ";
    }
    cout << endl;

    auto it = find(old_val.begin(), old_val.end(), find_val);
  

    if(it == old_val.end()) cout << "-1" << endl;
   else cout << it - old_val.begin() << endl;


return 0;
}