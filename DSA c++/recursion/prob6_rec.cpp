#include<bits/stdc++.h>
using namespace std;
// int sum=0;
//sum of n no.

// void numbersum(int i,int sum){
//     if(i<1){
//         cout<<sum;
//         return ;
//     }
//     sum=sum+i;
//     numbersum(i-1,sum);
// }
// int main(){
//     int n;
//     cout<<"enter n";
//     cin>>n;
//     numbersum(n,0);
// }


//functional

int  numbersum(int n){
    if(n==0){
        return 0;
    }
    return n + numbersum(n-1);
}

int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    cout<<numbersum(n);
}





