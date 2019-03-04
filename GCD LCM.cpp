#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t, g, l;
    cin >> t;
    while(t --){
        cin >> g >> l;
        if(l%g){
            cout << -1 << endl;
        }
        else{
            cout << g << " " << l << endl;
        }
    }
    return 0;

}
