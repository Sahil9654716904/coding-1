#include <bits/stdc++.h>
using namespace std;
int main(){

    //cin.ignore();

    string str1;
    getline(cin,str1);
    string str2;
    getline(cin,str2);
    int n;
    cin>>n;
    string result=" ";
    
    for(int i=0;i<str1.length();i++){
        result+=str1[i];
        if((i+1)%n==0 && i!=str1.length()-1){
            result+=str2;
        }
    }
    cout<<result;






}