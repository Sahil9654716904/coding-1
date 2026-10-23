#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"enter num";
    cin>>num;
    int ans=0;
    int rem;
    int mul=1;

    while(num>0){
        rem=num%10;
        num/=10;
        ans+=rem*mul;
        mul*=2;
        
    }
    cout<<ans;
}