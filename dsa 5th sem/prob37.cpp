#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<string>> vec(n,vector<string>(m));

    for(int i=0; i<n;i++){
        for(int j=0;j<m;j++){
            cin>> vec[i][j];
        }
    }
    for(int i=0; i<n;i++){
        cout<<vec[i][0].size()<<" "<<vec[i][m-1].size()<<endl;
    }
    
}