#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool cmp(pair <double, int> a, pair <double, int> b){
    if(a.first == b.first){
        return a.second < b.second;
    }
    return a.first < b.first;
}
int main(){
    double x, y, d;
    ll t, n;
    vector <pair <double, int>> m;
    vector <pair <double, int>> ::iterator it;
    cin >> t;
    while(t --){
        m.clear();
        cin >> n;
        for(int i = 0; i < n; i ++){
            cin >> x >> y;
            d = x/y;
            m.push_back({d,i+1});
        }
        sort(m.begin(), m.end(),cmp);
        int i = 0;
        for(it = m.begin(); it != m.end(); it ++, i ++){
            cout << it->second;
            if (i != n-1) cout << " ";
        }
        cout << endl;
        if(t){
            cout << endl;
        }
    }

    return 0;
}
