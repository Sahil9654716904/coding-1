#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m,k;
    cout<<"enter row and coloum";
    cin>>n>>m;
    cin>>k;
    vector<vector<int>> mat(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<n/2;i++){
        for(int j=0;j<k;j++){
            swap(mat[i][m-k+j],mat[n-1-i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

}