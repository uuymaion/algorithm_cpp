#include <iostream>
#include <string>
using namespace std;
#define int long long

int n;
int arr[90];
int operate(int value){
	if(value == 1) return 1;
	else if(value == 2) return 2;
	else{
		if(value<=90 && arr[value-1]){
			return arr[value-1];
		}else{
			arr[value-1] = operate(value-1)+operate(value-2);
			return arr[value-1];
		}
	}
}
signed main(){
	while(cin>>n){
		if(n==0) break;
		cout << operate(n) << endl;
	}
	return 0;
}
