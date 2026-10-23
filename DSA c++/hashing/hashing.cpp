#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter element"<<i+1;
        cin>>arr[i];
    }

    //precompute
    int hash[13]={0};
    for (int i=0; i<n;i++){
        hash[arr[i]]+=1;
    }


    int q;
    cout<<"enter q";
    cin>>q;
    while(q--){
        int number ;
        cin>>number;
        cout<<hash[number]<<endl;
    }//fetch
    return 0;
}
