#include <bits/stdc++.h>

using namespace std;
int main(){
    int t, n, c = 0, cs = 0;
    string s;
    cin >>t;
    while(t --){
      cin >> n >> s;
      c = 0;
      for(int i = 0; i < n; i ++){
        if(s[i] == '.'){
            i += 2;
            c ++;
        }
      }
      cout << "Case " << ++cs << ": " << c << endl;

    }
    return 0;
}
