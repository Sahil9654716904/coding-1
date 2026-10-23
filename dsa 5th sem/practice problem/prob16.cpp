#include<bits/stdc++.h>
using  namespace std;

int main(){
    int n;
    cout<<"enter n";
    cin>>n;

    vector<int> vec(n);

    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    cout<<endl;
    int freq=count(vec.begin(),vec.end(),1);
    cout<<freq<<endl;

    vec.erase(vec.begin()+freq);
    for(int i=0;i<n-1;i++){
        cout<<vec[i];
    }

    
}