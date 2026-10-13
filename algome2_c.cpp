#include <iostream>
#include <string>
using namespace std;
int n;
string input;
bool prime(int v){
    if(v<=1) return false;
    for(int i=2;i<v;i++){
        if(v%i==0) return false;
    }
    return true;
}
int main(){
    cin >> n;
    bool haveans = false;
    int arr[128];
    for(int z=1;z<n+1;z++){
        for(int i=0;i<128;i++) arr[i] = 0;
        haveans = false;
        cin >> input;
        cout << "Case " << z << ": ";
        for(int i=0;i<input.length();i++) arr[(int)input[i]]++;
        for(int i=0;i<128;i++){
            if(arr[i]!=0 && prime(arr[i])){
                haveans = true;
                cout << (char)i;
            }
        }
        if(!haveans) cout << "empty";
        cout << endl;
    }
    return 0;
}