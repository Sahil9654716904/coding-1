#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    int arr[n];
    cout<<"enter element"<<endl;
    for(int i=0;i<n;i++){
    
        cin>>arr[i];
    }
    sort(arr,arr+n,greater<int>());
    int sum_max=accumulate(arr,arr+5,0);
    cout<<sum_max<<endl;
    for (int i = 0; i < 5; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    // sort(arr,arr+n,less<int>());
    sort(arr,arr+n );
    int sum_min=accumulate(arr,arr+5,0);
    cout<<sum_min<<endl;

}