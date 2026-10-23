#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    int k;
    cout<<"enter k";
    cin>>k;
    vector<int> vec(n);
    cout<<"enter element";
    for(int i=0;i<n;i++){
        
        cin>>vec[i];
    }
    for(int i=0;i<n;i+=2*k){
        for(int j=0;j<k;j++){
            swap(vec[i+j],vec[i+j+k]);
         }
        }
    for(int j=0;j<n;j++){
        cout<<vec[j];
    }



}