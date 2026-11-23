#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;
#define int long long
vector<vector<int>> arr;
vector<vector<int>> done;
int w, n;
int dp(int x, int y){
    if(done[x][y]) return arr[x][y];
    if(x>0) {
        arr[x][y] += dp(x-1, y);
        arr[x][y] %= 1000000007;
    }
    if(y>0) {
        arr[x][y] += dp(x, y-1);
        arr[x][y] %= 1000000007;
    }
    done[x][y] = 1;
    return arr[x][y];
}
signed main(){
    int how;
    cin >> how;
    while(how--){
        cin >> w >> n;
        arr.assign(w, vector<int>(n, 0));
        done.assign(w, vector<int>(n, 0));
        cin.ignore();
        string line;
        for(int i=0;i<w;i++){
            getline(cin, line);
            stringstream ss(line);
            int v;
            ss >> v;
            while(ss >> v){
                done[i][v-1] = 1;
            }
        }
        if(done[0][0] == 0){
            arr[0][0] = 1;
            cout << dp(w-1, n-1);
        }else cout << 0;
        cout << endl;

    }
}