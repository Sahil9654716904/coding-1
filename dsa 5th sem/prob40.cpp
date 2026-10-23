#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cout<<"enter n";
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        int count =-1;
        for(int j=i+1;j<n;j++){
            
            if(s[i]==s[j]){
                count=j-i-1;
                break;
            }
            else {
                count=-1;
            }
            

        }
        cout<<count;
    }
}