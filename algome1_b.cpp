#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define int long long
vector<int> h;
vector<int> w;
int nh, nw;
bool check(int n){
    if(nw==0) return true;
    int iw = 0;
    int temp = w[iw];
    for(int i=0;i<nh;i++){
        if(h[i]>=n){
            temp--;
            if(temp<=0){
                if(iw==nw-1) break;
                else{
                    iw++;
                    temp = w[iw];
                }
            }
        }else{
            temp = w[iw];
        }
    }
    if(iw==nw-1 && temp==0) return true;
    else return false;
}
signed main(){
    while(cin >> nh >> nw){
        h.assign(nh, 0);
        w.assign(nw, 0);
        int maxh = 0;
        int ans = 0;
        for(int i=0;i<nh;i++){
            cin >> h[i];
            maxh = max(h[i], maxh);
        }
        for(int i=0;i<nw;i++) cin >> w[i];
        int left = 0;
        int right = maxh;
        int mid;
        while(left < right){
            // cout << left << " "<< right << endl;
            mid = (left + right + 1) / 2;
            if(check(mid)) {
                left = mid;    
                ans = mid;
            }else right = mid - 1;
        }
        cout << ans << endl;
    }
    return 0;
}