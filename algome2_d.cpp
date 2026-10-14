#include <iostream>
#include <string>
#include <bitset>
using namespace std;
#define int long long

const int MAX = 100000000;
bitset<MAX+1> list;

bool isprime(int i){
    return !list[i-1];
}
signed main(){
    int n;
    list[0] = true;
    int v = 1;
    for(int i=2;i*i<=MAX;i++){
        if(!list[i]) for(int j=i*i;i<=MAX;j+=i) list[i] = true;
    }
    for(int i=0;i<30;i++) cout << list[i]<<" ";
    while(cin >> n){
        int ansone = -1, anstwo = -1;
        for(int i=2;i<n;i++){
            for(int j=2;j<n;j++){
                if(i==j)continue;
                if(isprime(i) && isprime(j) && (i+j==n)){
                    ansone = i;
                    anstwo = j;
                    break;
                }
            }if(ansone!=-1) break;
        }
        if(ansone==-1) cout << n << " is not the sum of two primes!\n";
        else cout << n << " is the sum of " << ansone << " and " << anstwo << "." << endl;
    }
    return 0;
}
