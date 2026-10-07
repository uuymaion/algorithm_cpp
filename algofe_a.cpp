// 3n+1的快速版
#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MAX = 1000000;
int arr[MAX];

int cycle (int n){
    int counter = 1;
    while(n!=1){
        if(n%2==0) n /= 2;
        else n = 3*n + 1;
        counter++;
    }
    return counter;
}

int check (int n){
    if(n==1) return 1;
    if(n<MAX && arr[n]) return arr[n];
    int ans = cycle(n);
    if(n<MAX) arr[n] = ans;
    return ans;
}

signed main(){
    int a, b;
    while(cin >> a >> b){
        int temA = a, temB = b;
        if(a>b){
            temA = b;
            temB = a;
        }
        int max = 0;
        for(int i=temA;i<=temB;i++){
            int tem = check(i);
            if(tem>max) max = tem; 
        }
        cout << a << " " << b << " " << max << endl;
    }
}