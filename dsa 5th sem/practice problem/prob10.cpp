#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"enter n";
    cin>>n;
    vector<int> vec(n);

    for(int i=0;i<n;i++){
        cin>> vec[i];
    }

    int sum1=accumulate(vec.begin(),vec.begin()+2,0);
    cout<<sum1<<endl;
    int sum2=accumulate(vec.end()-2 ,vec.end(),0);
    cout<<sum2;

}