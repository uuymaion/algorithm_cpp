// 3n+1

#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAX = 1000001;
vector<int> arr;    

int oper(int n){
    if(n==1) return 1;
    if(n<MAX && arr[n]!=-1) return arr[n];

    int temN = n;
    if(n%2) n = 3*n + 1;
    else n /= 2;

    int count = 1 + oper(n);
    if(temN<MAX) arr[temN] = count;
    return count;
}

signed main(){
    int a, b;
    arr.assign(MAX, -1);
    while(cin>>a>>b && a!=0 && b!=0){
        int temA, temB;
        if(a>b){
            temA = b;
            temB = a;
        }else{
            temA = a;
            temB = b;
        }
        int ans = 0;
        for(int i=temA;i<=temB;i++){
            ans = max(ans, oper(i));
        }
        cout << a << " " << b << " "<< ans << endl;
    }


    return 0;
}