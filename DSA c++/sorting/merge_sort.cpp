#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int low,int mid,int high){
    // int n;
    int n=high-low+1;
    int temp[n];
    int k=0;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<arr[right]){
            // temp.add(arr[left]);
            temp[k]=arr[left];
            left++;
            k++;
        }
        else{
            // temp.add(arr[right]);
            temp[k]=arr[right];
            right++;
            k++;
        }

    }
    while(left<=mid){
        // temp.add(arr[left]);
        temp[k]=arr[left];
        left++;
        k++;
    }
    while(right<=high){
        // temp.add(arr[right]);
        temp[k]=arr[right];
        right++;
        k++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];

    }
    
}
void ms(int arr[],int low,int high){//divide
    if(low>=high) return;
    int mid=(low+high)/2;
    ms(arr,low,mid);
    ms(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main(){
    int n;
    cout<<"enter n ";
    cin>>n;
    int arr[n];
    // cout<<"enter n ";
    // cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter element"<<i+1;
        cin>>arr[i];
    }
    ms(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}