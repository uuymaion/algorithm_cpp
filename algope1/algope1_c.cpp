#include <iostream>

using namespace std;
#define int long long

signed main(){
	int n;
	string input;
	cin >> n;
	while(n--){
		cin >> input;
		int ans = 0;
		int count = 0;
		for(int i=0;i<input.length();i++){
			if(input[i]=='O'){
				count++;
			}else count = 0;
			ans += count;
		}
		cout << ans << endl;
	}
	return 0;
}
