#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    vector <ll> v;
   ll g, sum, n, k, mn, x, y, dif;
   while(scanf("%lld", &n) == 1){
      //memset(b, false, sizeof(b));
      vector <bool> b(1000005);
      v.clear();
      for(int i = 0; i < n; i ++){
        scanf("%lld", &g);
        v.push_back(g);
        b[g] = true;
      }
      scanf("%lld", &sum);
      sort(v.begin(), v.end());
      mn = INT_MAX;
      for(int i: v){
        k = abs(sum-i);
        //cout << b[k] << endl;
        if(b[k] == true){
            dif = abs(k-i);
            if(dif<mn){
                mn = dif;
                x = i;
                y = k;
                //cout << x << " " << y << endl;
            }
        }
      }
      printf("Peter should buy books whose prices are %lld and %lld.\n", x, y);
      printf("\n");
   }
   return 0;
}
