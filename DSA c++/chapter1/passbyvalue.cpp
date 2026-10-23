#include<bits/stdc++.h>
using namespace std;
//pass by value
// void dosomething(int num){
//     cout<<num<<endl;
//     num+=5;
//     cout<<num<<endl;
//     num+=5;
//     cout<<num<<endl;
// }

// int main(){

//     int num=10;
//     dosomething(num);
//     cout<<num;
//     return 0;
// }

//pass by refrence-> original value pass
void dosomething(int &num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}

int main(){

    int num=10;
    dosomething(num);
    cout<<num;
    return 0;
}