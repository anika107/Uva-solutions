#include <bits/stdc++.h>

using namespace std;
int n, m;
char a[105][105];
int cnt[105][105];

int row[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int col[] = {-1, 0, 1, -1, 1, -1, 0, 1};

bool safefloodfill(int x, int y){
    return x >= 0 && y >= 0 && x < n && y < m;
}
void floodfill(int x, int y){
    for(int i = 0; i < 8; i ++){
        if(safefloodfill(x + row[i], y + col[i])){
           cnt[x+row[i]][y+col[i]] ++;
        }
    }
}
int main(){
    int c = 0;
    bool b = false;
    while(cin >> n >> m && n != 0 && m != 0){
        for(int i = 0; i < n; i ++){
            for(int j = 0; j < m; j ++){
                cin >> a[i][j];
            }
        }
        memset(cnt, 0, sizeof(cnt));
        for(int i = 0; i < n; i ++){
            for(int j = 0; j < m; j ++){
                if(a[i][j] == '*'){
                    floodfill(i, j);
                }
            }
        }
         if(b)printf("\n");
            cout << "Field #" << ++c << ":" << endl;

        b = true;
        for(int i = 0; i < n; i ++){
            for(int j = 0; j < m; j ++){
                if(a[i][j] == '*'){
                    cout << '*';
                }
                else{
                    cout << cnt[i][j];
                }
            }
            cout << endl;
        }
        //cout << endl;
    }
    return 0;
}

