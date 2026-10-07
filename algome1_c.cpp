#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
int v, e, ds;
const int MAX = 201;
vector<pair<int, int>> list[MAX];

int main(){
	bool first = true;
	while(cin >> v >> e >> ds){
		if(v==0 && e==0 && ds==0) break;
		if(first) first = false;
		else cout << endl;
		
		int one, two, data;
		int arr[v][v];
		
		if(ds){
			for(int i=0;i<v;i++) list[i].clear();

			for(int i=0;i<e;i++){
				cin >> one >> two >> data;
				list[one-1].push_back({two, data});
				list[two-1].push_back({one, data});
			}
			for(int i=0;i<v;i++){
				sort(list[i].begin(), list[i].end());

				cout << i+1 << " ";
				for(auto &ip : list[i]){
					cout << ip.first << " " << ip.second << " ";
				}
				if(i!=v-1) cout << endl;
			}



		}else{
			for(int i=0;i<v;i++){
				for(int j=0;j<v;j++){
					arr[i][j] = (i==j) ? 0:100;
				}
			}
			for(int i=0;i<e;i++){
				cin >> one >> two >> data;
				arr[one-1][two-1] = data;
				arr[two-1][one-1] = data;
			}
			for(int i=0;i<v;i++){
				for(int j=0;j<v;j++){
					printf("%3d", arr[i][j]);
					cout << " ";
				}
				if(i!=v-1) cout << endl;
			}
		}
		cout << endl;
	}
	return 0;
}

