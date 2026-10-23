#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid;
    while(start<end){
        mid=(start+end)/2;
        //mid =start+(end-start)/2;
        if(arr[mid]==key){
            // cout<<"got it";
            return mid;
            break;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}


int main(){

    int n;
    cout<<"enter n";
    cin>>n;
    int arr[n];
    // int start=0;
    // int end=n-1;
    // int mid;
    int key;
    cout<<"enter key";
    cin>>key;
    cout<<"enter element";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<binary_search(arr,n,key);
    return 0;
    // int key=5;
    //without function
    // while(start<=end){
    //     mid=(start+end)/2;
    //     if(arr[mid]==key){
    //         cout<<"got it";
            
    //         break;
    //     }
    //     else if(arr[mid]<key){
    //         start=mid+1;
    //     }
    //     else{
    //         end=mid-1;
    //     }
    // }
    // cout<<"does not found";
}