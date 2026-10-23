#include <iostream>
using namespace std;

int main(){
    int n =5;
    int prev=1;
    int last=0;
    int curr;

    // int sum=0;
    for(int i=0;i<n;i++){
        curr=prev+last;
        last=prev;
        prev=curr;
        cout<<curr;
        
        
    }

};