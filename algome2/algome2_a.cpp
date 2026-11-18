#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a, b, one, two, sum;
    for(int z=1;z<n+1;z++){

        cin >> a >> b >> one >> two;
        int sum = one + two;
        int arr[a][b];
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++) arr[i][j] = 0;
        }

        string input;
        for(int i=0;i<a;i++){
            cin >> input;
            for(int j=0;j<b;j++){
                if(input[j]=='V'){
                    arr[i][j] = sum;
                    if(i>0){
                        if(j>0) arr[i-1][j-1] = max(arr[i-1][j-1], two);
                        if(j<b-1) arr[i-1][j+1] = max(arr[i-1][j+1], two);
                        arr[i-1][j] = max(arr[i-1][j], one);
                    }
                    if(i<a-1){
                        if(j>0) arr[i+1][j-1] = max(arr[i+1][j-1], two);
                        if(j<b-1) arr[i+1][j+1] = max(arr[i+1][j+1], two);
                        arr[i+1][j] = max(arr[i+1][j], one);
                    }
                    if(j>0) arr[i][j-1] = max(arr[i][j-1], one);
                    if(j<b-1) arr[i][j+1] = max(arr[i][j+1], one);
                }
            }
        }
        cout << "Airplane #" << z << ":\n";
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(arr[i][j]==sum) cout << 'V';
                else cout << arr[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}