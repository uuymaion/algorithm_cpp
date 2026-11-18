// BFS DFS
#include <vector>
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
#define int long long
vector<int> arr[201];
vector<bool> vis;
queue<int> q;
int v, e, d;
void bfs(int n){
    vis[n] = true;
    q.push(n);
    while(!q.empty()){
        int numb = q.front();
        q.pop();
        cout << numb << " ";
        for(auto &p:arr[numb]){
            if(!vis[p]){
                vis[p] = true;
                q.push(p);
            }
        }
    }
}
void dfs(int n){
    if(vis[n]) return;
    else cout << n << " ";
    vis[n] = true;
    for(int i=(int)arr[n].size()-1;i>=0;i--){ // 注意這邊是從比較深的地方開始走
        dfs(arr[n][i]);
    }
}
signed main(){
    while(cin>>v>>e>>d && v!=0){
        vis.assign(205, false);
        for(int i=0;i<v+1;i++) arr[i].clear();
        int one, two;
        for(int i=0;i<e;i++) {
            cin >> one >> two;
            arr[one].push_back(two);
            arr[two].push_back(one);
        }
        for(int i=1;i<v+1;i++) sort(arr[i].begin(), arr[i].end());
        if(d){
            dfs(1);
        }else{
            bfs(1);
        }
        cout << endl;
    }
    return 0;
}

