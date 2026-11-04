#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        vector<pair<int, int>> time;
        int f, e;
        for(int i=0;i<n;i++){
            cin >> f>>e;
            time.push_back({f, 1});
            time.push_back({e, -1});
        }
        sort(time.begin(), time.end());
        int count = 0;
        int ans = 0;
        for(auto &a : time){
            count += a.second;
            ans = max(count, ans);
        }
        cout << ans << endl;
    }
}