#include <bits/stdc++.h>
#define ll long long int
using namespace std;


#define dbg(args...) {cout<<"-->";debugger::call(#args,args);cout<<"\n";}
struct debugger {
	static void call(const char* it) {}
	template<typename T, typename ... aT>
	static void call(const char* it, T a, aT... rest) {
		string b;
		for (; *it&&*it != ','; ++it) if (*it != ' ')b += *it;
		cout << b << "=" << a << " ";
		call(++it, rest...);
	}
};

int main(){
    string dp[5003], t1, t2;
    ll n1, n2, k1, k2, k, carry = 0;
    dp[0] = "0";
    dp[1] = "1";
    dp[2] = "1";
    for(int i = 3 ; i <= 5000; i ++){
        t1 = dp[i-1];
        t2 = dp[i-2];
        n1 = t1.size();
        n2 = t2.size();
        n1 --;
        n2 --;
        carry = 0;
       // dbg(t1, t2, n1, n2);
        int mn = min(n1, n2)+1;
        while(mn --){
           k1 = t1[n1]-'0';
           k2 = t2[n2]-'0';
           k = carry + k1 + k2;
          // dbg(k, carry, k1, k2);
           if(k>=10){
              //char s = to_string(k%10);

              dp[i].push_back((k%10)+'0');
              carry = k/10;
            //  dbg((k%10)+'0' , carry);
           }
           else{
             dp[i].push_back(k + '0');
             carry = 0;
          //   dbg(k+'0' , carry);
           }
           n1 --;
           n2 --;
         //  dbg(n1, n2);
        }
       // dbg(n1, n2);
        if(n1 == -1 && n2 >= 0){
           while(n2 >= 0){
          // k1 = t1[n1]-'0';
           k2 = t2[n2]-'0';
           k = carry + k2;
         //  dbg(k, carry, k2);
           if(k>=10){
              dp[i].push_back(k%10 + '0');
              carry = k/10;
            //  dbg(k%10+'0' , carry);
           }
           else{
             dp[i].push_back(k + '0');
             carry = 0;
             // dbg(k+'0' , carry);
           }
           //n1 --;
           n2 --;
        }
        }
         if(n2 == -1 && n1 >= 0){
           while(n1 >= 0){
          // k1 = t1[n1]-'0';
           k1 = t1[n1]-'0';
           k = carry + k1;
        //   dbg(k, carry, k1);
           if(k>=10){
              dp[i].push_back((k%10)+'0');
              carry = k/10;
              //dbg(k%10+'0' , carry);
           }
           else{
             dp[i].push_back(k+'0');
             carry = 0;
              //dbg(k+'0' , carry);
           }
           //n1 --;
           n1 --;
        }
        }
        if(carry){
            dp[i].push_back(carry+'0');
            // dbg(carry+'0');
        }
       //  dbg(dp[i]);
        reverse(dp[i].begin(), dp[i].end());
       // dbg(dp[i]);
        //cout << dp[i] << endl;
    }
    int n;
    while(scanf("%d", &n) == 1){
        cout << "The Fibonacci number for " << n << " is " << dp[n] << endl;
    }
    return 0;
}

