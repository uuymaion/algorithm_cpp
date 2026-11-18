#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
#define int long long
int wn, pn;
vector<int> w;
vector<int> p;
bool check(int n){
    int index = 0;
    int count = p[index];
    for(int i=0;i<wn;i++){
        if(w[i]>=n){
            count--;
            if(count<=0){ // 考慮p[index]為0
                index++;
                if(index==pn) return true;
                count = p[index];
            }
        }else count = p[index];
    }
    if(index>=pn-1 && count<=0) return true;
    else return false;
}
signed main(){
    while(cin >> wn >> pn){
        w.assign(wn, 0);
        p.assign(pn, 0);
        int left = 0, right = 0, mid = 0;
        for(int i=0;i<wn;i++) {
            cin >> w[i];
            right = max(w[i], right);
        }
        for(int i=0;i<pn;i++) cin >> p[i];
        while(left<right){
            mid = (left + right + 1)/2;
            if(check(mid)) left = mid;
            else right = mid - 1;
        }
        cout << left << endl; // left才是最終答案
    }
    return 0;
}
/*
10 3
5 3 7 5 1 7 5 3 8 4
2 2 1
*/