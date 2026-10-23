#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cout<<"enter row and column";
    cin>>n>>m;
    vector<vector<int>> mat(n,vector<int>(m));

    if (n>=6 && m>=6){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>mat[i][j];
            }
        }
    }
    for(int i=1;i<n-2;i++){
            for(int j=1;j<m-2;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
        
    


}