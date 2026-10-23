#include <iostream>
#include <cmath>
using namespace std;

int count_digit(int num){
    int count=0;
    // int n;
    while(num){
        count++;
        num/=10;

    }
    return count;
}

bool armstrong(int num,int digit){

    int n=num;
    int ans=0;
    int rem;
    while(n){
        rem=n%10;
        n=n/10;
        // ans=ans+rem^digit;
        ans=ans+ pow(rem,digit);
        
    }
    if(ans==num){
        return 1;
    }
    else{
    return 0;
    }
    
}

int main(){

    int num;
    cout<<"emter no.";
    cin>>num;
    int digit= count_digit(num);
    cout<<digit<<endl;

    cout<<armstrong(num,digit);
}