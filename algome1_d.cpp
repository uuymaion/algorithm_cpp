// DP
#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<vector<int>> ch; // 記錄誰是誰的下屬
vector<int> happy, dp0, dp1; 
// 紀錄開心值
// 紀錄某人沒來的最佳開心值
// 紀錄某人有來的最佳開心值
vector<bool> hasUP;
// 紀錄是否有主管，主要用來找最上面那位

void dfs(int g){
    // 先記錄自己
    dp1[g] = happy[g];
    dp0[g] = 0;

    // 歷遍所有下屬
    for(int value:ch[g]){
        dfs(value);
        dp1[g] += dp0[value]; // 如果g在的話，下屬就不能在
        dp0[g] += max(dp0[value], dp1[value]); // 如果g不在，下屬在不在都沒關係
    }
}

signed main(){
    int n;
    while(cin>>n && n!=0){

        map<string, int> id;
        string a;
        int b;

        // 先assign成空白
        ch.assign(n, {});
        happy.assign(n, 0);
        dp0.assign(n, 0);
        dp1.assign(n, 0);
        hasUP.assign(n, false);

        for(int i=0;i<n;i++){
            cin >> a >> b;
            id[a] = i;
            happy[i] = b;
        }
        string c;
        for(int i=0;i<n-1;i++){ // 最上面那位沒有主管
            cin >> a >> c;
            int up = id[a], down = id[c];
            ch[up].push_back(down);
            hasUP[down] = true;
        }

        int root = 0;
        for(int i=0;i<n;i++){
            if(!hasUP[i]) {
                root = i; 
                break;
            }
        }
        dfs(root);
        cout << max(dp0[root], dp1[root]) << endl;
    }
    
}