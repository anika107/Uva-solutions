#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin >> t;
    double x;
    double d = 0.0;
    for(int cs = 1; cs <= t; cs ++){
        cin >> x;
        cout << "Case " << cs << ": ";
        if(x <= 180000.00){
            cout << 0 << endl;
            continue;
        }
        else if(x > 180000.00 &&  x <= 480000.00){
            d = ((x-180000.00) * 0.1);
        }
        else if( x > 480000.00 && x <= 880000.00){
           d = (300000.0*0.1) + ((x-480000.00) * 0.15);
        }
        else if(x > 880000.00 && x <= 1180000.00){
            d = (300000.0*0.1) + (400000.00*0.15) + ((x - 880000.00)*0.2);
        }
        else{
            d = (300000.0*0.1) + (400000.00*0.15) + (300000.00 * 0.2) + ((x - 1180000.00)*0.25);
        }

        if(d < 2000){
            cout << 2000 << endl;
        }
        else{
            ll f = (ll)d;
            if(f < d){
                f ++;
            }
            cout << f << endl;
        }
    }
    return 0;
}
