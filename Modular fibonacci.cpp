
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void multiply(ll F[2][2], ll M[2][2], ll m)
{
  ll x =  (((F[0][0]%m)*(M[0][0]%m)%m) + ((F[0][1]%m)*(M[1][0]%m)%m))%m;
  ll y =  (((F[0][0]%m)*(M[0][1]%m)%m) + ((F[0][1]%m)*(M[1][1]%m)%m))%m;
  ll z =  (((F[1][0]%m)*(M[0][0]%m)%m) + ((F[1][1]%m)*(M[1][0]%m)%m))%m;
  ll w =  (((F[1][0]%m)*(M[0][1]%m)%m) + ((F[1][1]%m)*(M[1][1]%m)%m))%m;

  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}

void power(ll F[2][2], ll n, ll m)
{
  if( n == 0 || n == 1)
      return;
  ll M[2][2] = {{1,1},{1,0}};

  power(F, n/2, m);
  multiply(F, F, m);

  if (n%2 != 0)
     multiply(F, M, m);
}

ll fib(ll n, ll m)
{
  //int n, m;
  //while(scanf("%d %d", &n, &m) == 2){
     ll F[2][2] = {{1,1},{1,0}};
     if (n == 0)
       return 0;
     power(F, n-1, m);
     return F[0][0]%m;
 // }
}

ll bin_pow(ll a, ll b){
    ll r = 1;
    while(b>0){
        if(b&1){
            r = r * a;
        }
        a = a*a;
        b >>= 1;
    }
    return r;
}

int main()
{
  ll n , m;
  while(scanf("%lld %lld", &n, &m) == 2){
        m = bin_pow(2,m);
  printf("%lld\n", fib(n, m));
  }
  //getchar();
  return 0;
}
