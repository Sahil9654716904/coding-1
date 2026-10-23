#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    cout<<s.substr(k,n-2*k);
}