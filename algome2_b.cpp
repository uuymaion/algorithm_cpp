#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<bool> vis;
vector<int> ans;
vector<bool> isprime;

int input;
const int MAX = 40;

void dfs(int n){
    if(n==input+1){
        if(!isprime[ans[input]+ans[1]]) return;
        for(int i=1;i<n;i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    for(int i=2;i<input+1;i++){
        if(!vis[i] && isprime[ans[n-1]+i]){
            vis[i] = true;
            ans[n] = i;
            dfs(n+1);
            vis[i] = false;
        }
    }
}

int main(){
    int how = 1;
    isprime.assign(MAX, true);
    isprime[0] = false;
    isprime[1] = false;
    bool first = true;

    for(int i=2;i*i<MAX;i++){
        for(int j=i*i;j<MAX;j+=i) isprime[j] = false;
    }
    while(cin >> input){
        if(first) first = false;
        else cout << endl;
        vis.assign(MAX, false);
        ans.assign(MAX, 0);
        ans[1] = 1;
        vis[1] = true;
        cout << "Case " << how++ << ":\n";
        if(input%2==0) dfs(2);
    }

}