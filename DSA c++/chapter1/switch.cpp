#include<bits/stdc++.h>
using namespace std;

int main(){

    int day;
    cout<<"enter no (1-7)";
    cin>>day;
    switch (day){
        case 1:
        cout<<"monday"<<endl;
        break;
        case 2:
        cout<<"tue"<<endl;
        break;
        case 3:
        cout<<"wed"<<endl;
        break;
        case 4:
        cout<<"thur"<<endl;
        break;
        case 5:
        cout<<"fri"<<endl;
        break;
        case 6:
        cout<<"sat"<<endl;
        break;
        case 7:
        cout<<"san"<<endl;
        break;
        default:
        cout<<"Invalid"<<endl;
        }

    return 0;
}