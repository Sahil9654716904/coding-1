#include<bits/stdc++.h>
using namespace std;

void reverseNum(int i,int n){
    if (i<1){
        return;
    }
    cout<<i<<endl;//4,3,2,1
    reverseNum(i-1,n);

}
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    reverseNum(n,n);
}