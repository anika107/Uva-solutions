#include <bits/stdc++.h>

using namespace std;
int main(){
    int n, m, k, x, y;
    while(cin >> k){
        cin >> n >> m;
        while(k --){
            cin >> x >> y;
            if(x == n || y == m){
                cout << "divisa" << endl;
            }
            else if(x > n && y > m){
                cout << "NE" << endl;
            }
            else if(x < n && y > m){
                cout << "NO" << endl;
            }
            else if(x < n && y < m){
                cout << "SO" << endl;
            }
            else{
                cout << "SE" << endl;
            }
        }
    }
    return 0;
}
