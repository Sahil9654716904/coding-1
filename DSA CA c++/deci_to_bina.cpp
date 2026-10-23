#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"enter number ";
    cin>>num;
    int rem;
    int mul=1;
    int ans=0;

    while(num>0){
        rem=num%2;
        // num=num/2;
        ans=rem*mul+ans;
        num=num/2;
        mul=mul*10;
        // cout<<ans;
    }
    cout<<ans;
    cout<<endl;
}