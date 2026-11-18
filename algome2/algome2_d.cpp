// 用埃式篩法把質數表先建立起來
// 當輸入n為奇數，只需要考慮n-2是否為質數
#include <iostream>
#include <string>
#include <bitset>
using namespace std;
#define int long long

const int MAX = 100000000;
bitset<MAX+1> list;

bool isprime(int i){
    return !list[i];
}
signed main(){
    int n;
    list[0] = true;
    list[1] = true;
    list[2] = false;
    int v = 1;
    for(int i=2;i*i<=MAX;i++){
        if(!list[i]) for(int j=i*i;j<=MAX;j+=i) list[j] = true;
    }
    // for(int i=0;i<30;i++) cout << list[i]<<" ";
    while(cin >> n){
        int ansone = -1, anstwo = -1;
        if (n % 2 != 0) {
            // 奇數：只能是 2 + (n-2)
            if (n > 2 && isprime(n - 2)) {
                ansone = 2;
                anstwo = n - 2;
            }
        } else {
            // 偶數：從中間開始往下找，且只找「奇數」
            // 為了確保 p2 - p1 是正數 (p1 < p2)，p1 最大只能是 n/2 - 1
            int start = n / 2 - 1;
            if (start % 2 == 0) start--; // 若起點剛好是偶數，減一變成奇數
            
            // 每次 i -= 2，略過所有偶數
            for(int i = start; i >= 3; i -= 2){
                if(isprime(i) && isprime(n - i)){
                    ansone = i;
                    anstwo = n - i;
                    break;
                }
            }
        }
        if(ansone==-1) cout << n << " is not the sum of two primes!\n";
        else cout << n << " is the sum of " << ansone << " and " << anstwo << "." << endl;
    }
    return 0;
}
