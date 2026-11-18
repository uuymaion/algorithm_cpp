// dfs
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
vector<int> arr[205];
vector<bool> vis(205, false);
queue<int> q;
bool first;
void dfs(int n){
    if(vis[n]) return; 
    vis[n] = true;

    if(!first) cout << " ";
    first = false;
    cout << n;
    for(int i = (int)arr[n].size() - 1; i >= 0; i--) dfs(arr[n][i]);
}
signed main(){
    int v, e;
    while(cin >> v >> e && (v!=0 || e!=0)){
        first = true;
        for (int i = 1; i <= v; i++) arr[i].clear();
        vis.assign(205, false);
        int a, b;
        for(int i=0;i<e;i++){
            cin >> a >> b;
            arr[a].push_back(b);
            arr[b].push_back(a);
        }
        for(int i=1;i<= v;i++) sort(arr[i].begin(), arr[i].end());
        dfs(1);
        cout << endl;
    }
    return 0;
}