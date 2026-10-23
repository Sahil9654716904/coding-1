#include<bits/stdc++.h>
using namespace std;

// void pattern_1(int n){
//     for (int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// void pattern_2(int n){
//     for (int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

void pattern(int n){
    for(int i=1;i<=2*n-1;i++){
        int star=i;
        if (i>n){ 
        
            star=2*n-i;
        }
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}


int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        // pattern_1(5);
        // pattern_2(5);
        pattern(n);

    }

}