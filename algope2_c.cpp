#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define int long long
int wn, pn;
vector<int> w;
vector<int> p;
bool check(int n){
    
}
signed main(){
    while(cin >> wn >> pn){
        w.assign(wn, 0);
        p.assign(pn, 0);
        int left = 0, right = 0, mid;
        for(int i=0;i<wn;i++) {
            cout << w[i];
            right = max(w[i], right);
        }
        for(int i=0;i<pn;i++) cout << p[i];
        while(left<right){
            mid = (left + right + 1)/2;
            if(check(mid))
        }
    }
    return 0;
}