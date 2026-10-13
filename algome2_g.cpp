#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define int long long

signed main(){
    int n;
    string input;
    cin >> n;
    while(n--){
        cin >> input;
        int sum;
        int value = 0;
        int signf = 1;
        int count = 1;
        for(int i=input.length()-1;i>=0;i--){
            value = 10*value + (input[i]-'0');
            cout << value << endl;
            count++;
            if(count==3){
                count = 1;
                value = 0;
                sum += value * signf;
                signf *= -1;
            }
        }
        sum += value * signf;
        if(sum%13==0) cout << sum << " YES";
        else cout << sum << " NO";
        cout << endl;
    }
}