#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;

    vector<vector<string>> vec(m,vector<string>(n));

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            // cin>>vec[i][j];
            getline(cin,vec[i][j]);
        }
    }
}