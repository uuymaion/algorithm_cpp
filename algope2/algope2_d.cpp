#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
#define int long long
const int MAX = 6001;
vector<int> son[MAX];
vector<bool> haveup;
vector<int> happy, go, notgo;

void op(int n){
    notgo[n] = 0;
    go[n] = happy[n];
    for(auto &p:son[n]){
        op(p);
        notgo[n] += max(notgo[p], go[p]);
        go[n] += notgo[p];
    }
}

signed main(){
    int n;
    while(cin>>n && n!=0){
        string name;
        int v;
        map<string, int> id;
        haveup.assign(n, false);
        happy.assign(n, 0);
        go.assign(n, 0);
        notgo.assign(n, 0);
        for(int i=0;i<n;i++) son[i].clear();
        for(int i=0;i<n;i++){
            cin >> name >> v;
            id[name] = i;
            happy[i] = v;
        }
        string one, two;
        for(int i=0;i<n-1;i++){
            cin >> one >> two;
            son[id[one]].push_back(id[two]);
            haveup[id[two]] = true;
        }
        int root;
        for(int i=0;i<n;i++){
            if(!haveup[i]){
                root = i;
            }
        }
        op(root);
        cout << max(go[root], notgo[root]) << endl;
    }
    return 0;
}
/*
15
A 1
B 5
C 3
D 10
E 14
F 4
G 8
H 3
I 2
J 11
K 2
L 6
M 9
N 6
O 7
A B
A C
A D
B E
B F
C G
D H
E I
E J
F K
F L
H M
H N
H O

*/