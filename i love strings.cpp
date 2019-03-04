#include <bits/stdc++.h>

using namespace std;
int main(){
    int k, q;
    cin >> k;
    string s;
    while(k --){
        cin >> s;
        cin >> q;
        while(q --){
           string t;
           cin >> t;
           int l = t.size();
           if(s.substr(0,l) == t){
              cout << "y" << endl;
           }
           else{
              cout << "n" << endl;
           }
        }
    }

    return 0;
}
