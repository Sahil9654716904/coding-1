#include<bits/stdc++.h>
using namespace std;

void reverseNum(int i,int n){
    if (i>n){
        return;
    }
    
    reverseNum(i+1,n);
    cout<<i<<endl;//4,3,2,1

}
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    reverseNum(1,n);
}