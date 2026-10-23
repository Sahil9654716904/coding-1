#include<bits/stdc++.h>
using namespace std;
// int  =0;
// int n;
int i=1;
void printName(int i,int n){
    if (i>n){
        return;
    }
    cout<<"sahil"<<endl;
    // i+=1;
    printName(i+1,n);
    
}

int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    printName(1,n);

    return 0;
}