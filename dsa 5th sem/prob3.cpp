#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"enter n";
    cin>>n;
    vector<int > vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int min=*min_element(vec.begin(),vec.end());
    cout<<min<<endl;
    int max=*max_element(vec.begin(),vec.end());
    cout<<max<<endl;

    int idx1=find(vec.begin(),vec.end(),*min_element(vec.begin(),vec.end()))-vec.begin();
    cout<<idx1<<endl;
    int idx2=find(vec.begin(),vec.end(),*max_element(vec.begin(),vec.end()))-vec.begin();
    cout<<idx2;
    

}