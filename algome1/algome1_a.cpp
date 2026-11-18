// mergesort
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n;
vector<int> temp;
vector<int> list;
void print(){
    for(int i=0;i<n;i++) cout << list[i] << " ";
    cout << endl;
}
void merge(int left, int mid, int right){
    int i = left;
    int j = mid+1;
    int k = left;
    while(i<=mid && j<=right){
        if(list[i]<=list[j]) temp[k++] = list[i++];
        else temp[k++] = list[j++];
    }
    while(i<=mid) temp[k++] = list[i++];
    while(j<=right) temp[k++] = list[j++];
    for(int a=left;a<=right;a++) list[a] = temp[a];
    print();
}
void mergesort(int left, int right){
    if(left>=right) return;
    int mid = (left+right)/2;
    mergesort(left, mid);
    mergesort(mid+1, right);
    merge(left, mid, right);
}
signed main(){
    while(cin >> n){
        temp.assign(n, 0);
        list.assign(n, 0);
        for(int i=0;i<n;i++) cin >> list[i];
        mergesort(0, n-1);
        cout << endl;
    }
    return 0;
}