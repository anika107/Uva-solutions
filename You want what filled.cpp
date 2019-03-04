#include <bits/stdc++.h>

using namespace std;
 char s[60][60];
 bool visited[60][60];
 vector <pair <char, int>> v;

 int x, y;
 int c = 0;

 void dfs(int i, int j, char g){
    if( i == -1 || j == -1 || i == x || j == y || s[i][j] != g || visited[i][j] == true || !isalpha(s[i][j]) ){
        return ;
    }
    visited[i][j] = true;
    c ++;
    dfs(i+1, j, g);
    dfs(i, j+1, g);
    dfs(i-1, j, s[i][j]);
    dfs(i,j-1, s[i][j]);
 }

 bool cmp(pair <char, int> a, pair <char, int> b){
     if(a.second > b.second){
        return true;
     }
     else if(a.second == b.second){
        return a.first < b.first;
     }
     else{
        return false;
     }
 }
int main(){
    int ts = 1;
    while(scanf("%d %d", &x, &y) == 2){
        if(x == 0 && y == 0){
            break;
        }
        for(int i = 0; i < x; i ++){
            for(int j = 0; j < y ; j ++){
                cin >> s[i][j];
            }
        }
        memset(visited, false, sizeof visited);
        v.clear();
        for(int i = 0; i < x; i ++){
            for(int j = 0; j < y; j ++){
                if(visited[i][j] == false && isalpha(s[i][j])){
                   visited[i][j] = true;
                   c ++;
                   dfs(i+1, j, s[i][j]);
                   dfs(i, j+1, s[i][j]);
                   dfs(i-1, j, s[i][j]);
                   dfs(i,j-1, s[i][j]);
                   v.push_back({s[i][j], c});
                   c = 0;
                }
            }
        }
        sort(v.begin(),v.end(), cmp);
        cout << "Problem " << ts << ":" << endl;
        ts ++;
        for(int i = 0; i < v.size(); i ++){
            cout << v[i].first << " " << v[i].second << endl;
        }
    }
    return 0;
}
