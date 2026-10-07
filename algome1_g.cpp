#include <iostream>
#include <string>
using namespace std;
#define int long long

const int LIM = 1000000;
int arr[LIM];

int op(int n){
	int tmep = n;
	if(n==1) return 1;
	if(n<LIM && arr[n]) return arr[n];

	if(n%2==0) n /= 2;
	else n = 3*n + 1;

	int count = 1 + op(n);
	if(tmep<LIM) arr[tmep] = count;
	return count;
}
signed main(){
	int a, b;
	while(cin >> a >> b){
		int max = 0;
		int temA = a;
		int temB = b;
		if(a>b){
			temB = a;
			temA = b;
		}
		for(int i=temA;i<=temB;i++) {
			int tem = op(i);
			if(max<tem) max = tem;
		}
		cout << a << " " << b << " " << max << endl;
	}
	return 0;
}
