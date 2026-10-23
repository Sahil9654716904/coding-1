#include<bits/stdc++.h>
using namespace std;

void dosomething(int arr[],int n){//array is always pass by refrence
    arr[0]+=100;
    cout<<"value inside function"<<arr[0]<<endl;
}

int main(){
    int n=5;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    // for(int i=0;i<3;i++){
    //     cout<<arr[i]<<endl;
    // }
    // cout<<arr[0]<<endl<<arr[1]<<endl<<arr[2];

    dosomething(arr,n);
    cout<<"value inside int main"<<arr[0]<<endl;
}