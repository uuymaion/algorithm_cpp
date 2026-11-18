// 中位數
#include <bits/stdc++.h>
using namespace std;
#define int long long

int n;
vector<int> arr;
int findmid(int i){
    int numb = arr[i];
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += abs(arr[i]-numb);
    }
    return sum;
}
signed main(){
    while(cin>>n && n!=0){
        int x;
        arr.assign(n, 0);
        for(int i=0;i<n;i++){
            cin >> x >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int one, two = -1;
        int ansid;
        int ans;
        if(n%2){
            one = n/2;
            ansid = one;
            ans = findmid(one);
        }else{
            one = n/2;
            two = n/2-1;
            int onef = findmid(one);
            int twof = findmid(two);
            if(onef>two){
                ansid = one;
                ans = onef;
            }else{
                ansid = two;
                ans = twof;
            }
        }
        // cout << one << two << endl;
        cout << arr[ansid] << " " << ans << endl;
    }    
}