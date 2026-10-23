#include<bits/stdc++.h>
using namespace std;

    void fun(int a[],int n){//a[]->pointer
        for(int i=0;i<n;i++){
            cout<<a[i];
        }
    }
int main(){

    int arr[5]={1,2,3,4,5};
    fun(arr,5);
}