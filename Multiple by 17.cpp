#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    string s;
    ll r, sum;
    while(cin >> s){
        if(s == "0"){
            break;
        }
        r = 0;
        for(ll i = 0, k = 0; i < s.size(); i ++, k ++){
            r = ((s[i]-'0') + ((r*10)%17))%17;
            //cout << r << endl;
        }
        if(r == 0){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
    return 0;
}
