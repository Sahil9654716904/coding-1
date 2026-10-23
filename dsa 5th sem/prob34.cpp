#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    string s1,s2;
    cin>>s1>>s2;
    string final=" ";
    string s3=s1.substr(n-k,n)+s1.substr(0,n-k);
    string s4=s2.substr(m-k,m)+s2.substr(0,m-k);
    cout<<s3+s4;


    
}