#include <bits/stdc++.h>

using namespace std;
int p[200005];
int ra[200005];
map <string, int> m;
map <string, int> ::iterator it;
int findr(int r){
    if(p[r] == r){
        return r;
    }
    else{
        return p[r] = findr(p[r]);
    }
}
void disjoint(int x, int y){
    x = findr(x);
    y = findr(y);
    if(x != y){
        p[x] = y;
        ra[y] += ra[x];
    }
}
int main(){
    int t;
    cin >> t;
    while(t --){
        int r, c;
        cin >> c;
        for(int i = 0; i < 2*c; i ++){
            ra[i] = 1;
        }
        m.clear();
        int h = 0;
        while(c --){
            string s1, s2;
                cin >> s1 >> s2;
                it = m.find(s1);
                if(it == m.end()){
                    m[s1] = h ++;
                    p[h-1] = h-1;
                }
                it = m.find(s2);
                if(it == m.end()){
                    m[s2] = h ++;
                    p[h-1] = h-1;
                }
                disjoint(m[s1], m[s2]);
                cout << ra[p[m[s2]]]<< endl;

        }
    }
    return 0;
}
