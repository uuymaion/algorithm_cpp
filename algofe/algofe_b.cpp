#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int how;
    cin >> how;
    whlie(how--){
        cin.tie(nullptr);
        string input;
        int ans = 0;
        int boolean = 1;
        int set = 1; 
        int numb;
        for(int i=input.length()-1;i>=0;i--){
            if(set==1){
                numb = stoll(input[i]);
            }else{
                numb = numb*10 + stoll(input[i]);
            }
            
            if(set==3){

            }
            set = (set+1)   
        }
    }
}