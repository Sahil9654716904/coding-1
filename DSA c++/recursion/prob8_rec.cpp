#include<bits/stdc++.h>
using namespace std;
//reverse an array

void reversearray(int i ,int arr[],int n){
    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    reversearray(i+1,arr,n);
    
}

int main(){
    int n;
    cout <<"enter n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter element"<<i+1<<endl;
        cin>>arr[i];
    }
    reversearray(0, arr ,n);
    // cout<<arr;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}