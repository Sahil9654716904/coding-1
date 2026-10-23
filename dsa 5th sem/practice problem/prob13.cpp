#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"enter n";
    cin>>n;
    

    for(int i=0;i<n;i++){
        int m;
        cout<<"enter m";
        cin>>m;
        vector<int> vec(m);
        cout<<"enter marks";
        for(int i=0;i<m;i++){
            
            cin>>vec[i];
        }
        int max=*max_element(vec.begin(),vec.end());
        cout<<max<<" ";
        int min=*min_element(vec.begin(),vec.end());
        cout<<min<<" ";
        int sum=accumulate(vec.begin(),vec.end(),0);
        cout<<sum<<" ";
        cout<<sum/m<<endl;
    }
    cout<<endl;
    
    



}