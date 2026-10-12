#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
#define int long long
vector<vector<int>> arr;

signed main(){
    int n;
    cin >> n;
    for(int z=1;z<=n;z++){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int e = c+d;
        arr.assign(a, vector<int>(b, 0));
        string line;
        bool left, right, up, down;
        for(int i=0;i<a;i++){
            left = (i>0);
            right = (i<a-1);
            cin >> line;

            for(int j=0;j<b;j++){
                up = (j>0);
                down = (j<b-1);
                if(line[j]=='V') {
                    arr[i][j] = e;
                    if(left) arr[i-1][j] = max(arr[i-1][j], c);
                    if(right) arr[i+1][j] = max(arr[i+1][j], c);
                    if(up) arr[i][j-1] = max(arr[i][j-1], c);
                    if(down) arr[i][j+1] = max(arr[i][j+1], c);
                    if(left && up) arr[i-1][j-1] = max(arr[i-1][j-1], d);
                    if(right && up) arr[i+1][j-1] = max(arr[i+1][j-1], d);
                    if(left && down) arr[i-1][j+1] = max(arr[i-1][j+1], d);
                    if(right && down) arr[i+1][j+1] = max(arr[i+1][j+1], d);
                }
            }
        }
        cout << "Airplane #" << z << ":" << endl;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(arr[i][j]==e) cout << "V";
                else cout << arr[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}