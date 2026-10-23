#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cout<<"enter row and coloum";
    cin>>n>>m;

    vector<vector<int>> mat(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<m-1;j++){
            swap(mat[i][j],mat[i+1][j+1]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

}