#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    cout<<"enter n and k";
    cin>>n>>k;
    string s;
    cin>>s;
    string ans=" ";

    for(int i=0;i<n;i=i+2*k){
        ans+=s.substr(i,k);
        string temp=s.substr(i+k,k);
        reverse(temp.begin(),temp.end());
        ans+=temp;
    }
    cout<<ans;
    
}