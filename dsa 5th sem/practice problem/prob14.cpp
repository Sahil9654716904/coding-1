#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"enter n";
    cin>>n;
    vector<int> vec(n);

    for(int i=0;i<n;i++){

        cin>>vec[i];

    }
    
    sort(vec.begin(),vec.end(),greater<int>());
    int sum_top_marks=accumulate(vec.begin(),vec.begin()+5,0);
    cout<<sum_top_marks<<endl;
    for(int i=0;i<5;i++){
        cout<<vec[i]<<" ";
    }
    
    
    
}