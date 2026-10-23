#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        int arr[m];
        for(int j=0;j<m;j++){
            cin>>arr[j];
        }
        int min=*min_element(arr,arr+m);
        cout<<min;
        int max=*max_element(arr,arr+m);
        cout<<max;
        int sum=accumulate(arr,arr+m,0);
        cout<<sum;
        int avg=sum/m;
        cout<<avg;
    }
}