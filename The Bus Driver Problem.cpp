#include <bits/stdc++.h>
#define ll long long int

using namespace std;
int main(){
    ll n, d, r, x, y, s;
    while(cin >> n >> d >> r && n != 0 && d != 0 && r != 0){
        s = 0;
        vector <ll> mor;
        vector <ll> even;
        for(int i = 0; i < n; i ++){
            cin >> x;
            mor.push_back(x);
        }
        sort(mor.begin(), mor.end());
        for(int i = 0; i < n; i ++){
            cin >> x;
            even.push_back(x);
        }
        sort(even.begin(), even.end(), greater<ll>());
        for(int i = 0; i < n; i ++){
            if((mor[i]+even[i]) > d){
                s += ((mor[i]+even[i])-d)*r;
            }
        }
        cout << s << endl;
    }
    return 0;
}
