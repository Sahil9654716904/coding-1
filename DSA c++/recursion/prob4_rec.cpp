#include<bits/stdc++.h>
using namespace std;
// int i=1;

void printNum(int i,int n){
    if(i<1){
        return;
    }
    printNum(i-1,n);
    cout<<i<<endl;//1,2,3,4
}
int main (){
    int n;
    cout<<"enter n";
    cin>>n;
    printNum(n,n);
}