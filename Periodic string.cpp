#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    string s, t, g;
    ll ts, k;
    cin >> ts;
    //cout << endl;
    while(ts --){
        cin >> s;
        t = "";
        g = "";
        for(int i = 0; i < s.size(); i ++){
            t += s[i];
            k = i+1;
            for(int j = 1; j <= s.size(); j += k){
                g += t;
            }
            //cout << t << " " << g << endl;
            if(g == s){
                cout << i+1 << endl;
                break;
            }
            g = "";
        }
        if(ts){
            cout << endl;
        }
    }
    return 0;
}
