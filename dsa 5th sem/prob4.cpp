#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cout<<"enter row and column";
    cin>>n>>m;
    vector<vector<int>> mat(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<mat[i][j];
    //     }
    // }

    for(int i=0;i<n;i++){
        int sum=accumulate(mat[i].begin(),mat[i].end(),0);
        cout<<sum<<" ";
        int max=*max_element(mat[i].begin(),mat[i].end());
        cout<<max <<" ";
        int min=*min_element(mat[i].begin(),mat[i].end());
        cout<<min<<endl;
    }

}