#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    string s;
    cin>>s;
    string temp="";
    string s1="";
    for(int i=0;i<n;i++){
        if(isalpha(s[i])){
        s1+=tolower(s[i]);
        }
        else if(isdigit(s[i])){
        s1+=s[i];
        }
        else{
        temp+=s[i];
        }

    }
    cout<<s1+temp;
}