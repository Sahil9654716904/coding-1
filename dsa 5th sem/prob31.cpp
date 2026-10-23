#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    string final=s.substr(n-k,n)+s.substr(0,n-k);
    cout<<final;
}