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
        int sum = 0;
        int value = 0;
        int signf = 1;
        int count = 0;
        for(int i=input.length()-1;i>=0;i--){
            if(count==0) value = input[i] - '0';
            else if(count==1)value = value + 10*(input[i]-'0');
            else if(count==2)value = value + 100*(input[i]-'0');
            // cout << value << endl;
            count++;
            if(count==3){
                sum += value * signf;
                count = 0;
                value = 0;
                signf *= -1;
            }
        }
        sum += value * signf;
        if(sum%13==0) cout << abs(sum) << " YES";
        else cout << abs(sum) << " NO";
        cout << endl;
    }
    return 0;
}