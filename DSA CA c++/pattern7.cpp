#include<iostream>
using namespace std;
int main(){
    int n=5;
    char name='a';

    for(int i=1;i<=n;i++){
        // name+(i-1);
        for(int j=1;j<=i;j++){
            name='a'+(i-1);
            cout<<name;
        }
        cout<<endl;
    }
    return 0;
}