#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"enter n";
    cin>>n;
    
    vector<string> vec(n);
    

    for(int i=0;i<n;i++){
        cin>>vec[i];     
    }
    int m=vec[0].length();
    for(int i=0;i<n/2;i++){
        cout<<vec[i].substr(0,i+1);
        cout<<vec[n-i-1].substr(m-i-1);
        if (i<n/2-1){
            cout<<" ";
        }
    }


}