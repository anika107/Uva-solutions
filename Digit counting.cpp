#include <bits/stdc++.h>

using namespace std;
int main(){
    int t, n;
    cin >> t;
    while(t --){
       cin >> n;
       vector <int> v(11, 0);
       for(int i = 1; i <= n; i ++){
          int k = i;
          while(k != 0){
             v[k%10] ++;
             k /= 10;
          }
       }
       for(int i = 0; i <= 9; i ++){
          if(i != 0){
             cout << " ";
          }
          cout << v[i];
       }
       cout << endl;


    }
    return 0;
}
