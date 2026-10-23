#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"enter group";
    cin>>n;
    

    for(int i=0;i<n;i++){
        int m;
        cout<<"enter employee";
        cin>>m;
        vector<int> vec(m);
        cout<<"enter salary";
        for(int i=0;i<m;i++){
            
            cin>>vec[i];
        }
        int sum=accumulate(vec.begin(),vec.end(),0);
            cout<<sum<<endl;
    }
    cout<<endl;
    
    



}