#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

signed main(){
    int v, e;
    vector<int> arr[205];
    while(cin >> v >> e && (v!=0 || e!=0)){
        for (int i = 1; i <= v; i++) arr[i].clear();
        int a, b;
        for(int i=0;i<e;i++){
            cin >> a >> b;
            arr[a].push_back(b);
            arr[b].push_back(a);
        }
        for(int i=1;i<= v;i++) sort(arr[i].begin(), arr[i].end());

        vector<bool> vis(v+1, false);
        queue<int> q;
        q.push(1);
        vis[1] = true;
        bool first = true;
        while(!q.empty()){
            int numb = q.front();
            q.pop();

            if(!first)cout << " ";
            cout << numb;
            first = false;
            for(int v:arr[numb]){
                if(!vis[v]){
                    vis[v] = true;
                    q.push(v);
                }
            }
        }
        cout << endl;
    }
    return 0;
}