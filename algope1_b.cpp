#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> arr;
vector<int> temp;
int how;
void print(){
    for(int value:arr) cout << value<< " ";
    cout<< endl;
}
void merge(int left, int mid, int right){
    int i = left;
    int j = mid+1;
    int k = left;
    while(i<=mid && j<=right){
        if(arr[i]<=arr[j]) temp[k++] = arr[i++];
        else temp[k++] = arr[j++];
    }
    while(i<=mid) temp[k++] = arr[i++];
    while(j<=right) temp[k++] = arr[j++];
    for(int a=left;a<=right;a++){
        arr[a] = temp[a];
    }
}
void mergesort(int left, int right){
    if(left>=right) return; // 這句很重要
    int mid = (left+right)/2;
    
    mergesort(left, mid);
    mergesort(mid+1, right);
    merge(left, mid, right);
    print();
}

signed main(){
    while(cin >> how){
        arr.assign(how, 0);
        temp.assign(how, 0);
        for(int i=0;i<how;i++){
            cin >> arr[i];
        }
        mergesort(0, how-1);
        cout << endl;
    }
}