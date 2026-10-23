#include<bits/stdc++.h>
using namespace std;
int main(){



int n;
cin>>n;
string s;
cin>>s;
string k=s;

reverse(s.begin(),s.end());
if(k==s){
    cout<<"yes";
}
else cout<<"no";
}

