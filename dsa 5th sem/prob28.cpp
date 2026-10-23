#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int k, n,m;
    cin>>k>>n>>m;
    int count=0;
    for(int i=0;i<k;i++){
        int x=(int )s[i];
        if(x<=m &&x>=n){
        count++;
        }
    }
    cout<<count;

}