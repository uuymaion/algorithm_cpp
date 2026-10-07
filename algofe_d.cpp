#include <iostream>
#include <string>
using namespace std;
#define int long long

void print(int i){
	while(i--){
		cout << "Hello World!\n";
	}
}
signed main(){
	int	n;
	bool first = true;
	while(cin >> n){
		if(n<0) break;

		if(first) first = false;
		else cout << endl;
	
		n = n%7;
		if(n==0) print(1);
		else if(n%2==1) print(2);
		else if(n%2==0) print(3);
	}
	return 0;
}
