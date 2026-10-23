#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    cin.ignore();
    string vec1;
    string vec2;
    getline(cin,vec1);
    getline(cin,vec2);

    int count =0;
    for(int i=0;i<n;i++){
         count=0;
        for(int j=0;j<m;j++){
            if(vec1[i]==vec2[j])
                count++;
        }
        cout<<count ;
        if(i<n-1)
            cout<<" "; 
    }
}