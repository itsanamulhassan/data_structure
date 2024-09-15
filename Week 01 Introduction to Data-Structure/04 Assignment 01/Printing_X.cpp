#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int middle = n/2;

    for(int row= 0; row < n; row++){
        for(int col = 0; col < n; col++){
         if(row == col || row+col == n-1){
            if(middle == row && middle == col){
                cout << "X";
            }else{
                if(row+col == n-1){
                cout << "/";
                }else {
                     cout << "\\";
                }
            }
         }else {
            cout << " ";
         }
        }
        cout << endl;
    }
   


return 0;
}