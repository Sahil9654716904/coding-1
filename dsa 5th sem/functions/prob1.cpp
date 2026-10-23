#include<bits/stdc++.h>
using namespace std;

int sumofdigit(int num){
    int sum=0;
    while(num>0){
        sum=sum+num%10;
        num=num/10;

    }
    return sum;
}

int main(){
    int start,end;
    int count=0;
  //  cout<<"enter start and end";
    cin>>start>>end;
    for(int i=start;i<=end;i++){
        if(i%3==0){
            if(sumofdigit(i)%2==0){
                count++;
            }
        }
    }
    cout<<count;
}