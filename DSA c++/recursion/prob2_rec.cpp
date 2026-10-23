#include<bits/stdc++.h>
using namespace std;
// int i=1;

void printNum(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    printNum(i+1,n);//1,2,3,4
}
int main (){
    int n;
    cout<<"enter n";
    cin>>n;
    printNum(1,n);
}