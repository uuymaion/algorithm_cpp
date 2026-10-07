#include <iostream>
#include <stack>
using namespace std;
#define int long long

signed main(){
	stack<char> arr;
	string line;
	bool ans;
	while(cin>>line){
		ans = true;
		for(auto &v:line){
			if(v=='('||v=='['||v=='{'){
				arr.push(v);
			}else if(v==')'){
				if(arr.empty()==0 && arr.top()=='(') arr.pop();
				else{
					// cout << "A";
					ans = false;
					break;
				}
			}else if(v==']'){
				if(arr.empty()==0 && arr.top()=='[') arr.pop();
				else{
					// cout << "B";
		 			ans = false;
					break;
				}
			}else if(v=='}'){
				if(arr.empty()==0 && arr.top()=='{') arr.pop();
				else{
					// cout << "C";
					ans = false;
					break;
				}
			}
			// if(arr.empty()==0) cout << arr.top() << endl;
		}
		if(arr.empty()==0) ans = false;

		if(ans) cout << "T\n";
		else cout << "F\n";

		int len = arr.size();
		// cout << len << endl;
		while(len--){
			arr.pop();
		}
	}
	return 0;
}
