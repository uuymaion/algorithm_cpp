#include <bits/stdc++.h>
using namespace std;
#define int long long
int v, e, d;
vector<pair<int, int>> arr[201];
int arr2[201][201];
void linked(){
    for(int i=0;i<v;i++) arr[i].clear();
    int one, two, value;
    for(int i=0;i<e;i++){
        cin >> one >> two >> value;
        arr[one-1].push_back({two, value});
        arr[two-1].push_back({one, value});
    }
    for(int i=0;i<v;i++){
        sort(arr[i].begin(), arr[i].end());

        cout << i+1 << " ";
        for(auto &p:arr[i]){
            cout << p.first << " " << p.second << " ";
        }
        if(i!=v-1) cout << endl;
    }
}
void Array(){
    int one, two, value;
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            if(i==j) arr2[i][j] = 0;
            else arr2[i][j] = 100;
        }
    }
    for(int i=0;i<e;i++){
        cin >> one >> two >> value;
        arr2[one-1][two-1] = value;
        arr2[two-1][one-1] = value;
    }
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            printf("%3d ", arr2[i][j]);
        }
        if(i!=v-1) cout << endl;
    }
}
signed main(){
    bool first = true;
    while(cin>>v>>e>>d){
        if(first) first = false;
        else cout << endl;
        if(v==0&&e==0&&d==0) break; 
        if(d) linked();
        else Array();
    }
}