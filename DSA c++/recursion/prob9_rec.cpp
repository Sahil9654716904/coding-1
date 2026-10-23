#include<bits/stdc++.h>
using namespace std;

//string is palimdrome 
//MADAM

bool reversestring(int i,string s){
    if (i>=s.size()/2) {
        return true;
    }

    if(s[i]!=s[s.size()-i-1]){
        return false;
    }
    return reversestring(i+1,s);
}


int main(){
    int n;
    
    cout<<"enter n";
    cin>>n;
    string s="madam";
    cout<<reversestring(0,s);

    

}