#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    // int MAX_INT;
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        if(ans>arr[i]){
            ans=arr[i];
        }
    }
    cout<<ans;
    return 0;
}