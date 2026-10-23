#include<bits/stdc++.h>
using namespace std;

long long sumofdigit(long long num){
    int sum=0;
    while(num>0){
        sum=sum+num%10;
        num=num/10;

    }
    return sum;
}


int main(){

    long long n;
    int k;
    cin>>n>>k;
    long long news;
    news = sumofdigit(n)*k;
    while(news >= 10){
        news =sumofdigit(news);
    }
    cout<< news;
    
}