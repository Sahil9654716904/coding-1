#include<bits/stdc++.h>
using namespace std;

//fibonacci no.

int fibseries(int n){
    if (n<=1){
        return n;
    }
    int last=fibseries(n-1);
    int slast =fibseries(n-2);
    return last+slast;
}

int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    cout<<fibseries(n);
}