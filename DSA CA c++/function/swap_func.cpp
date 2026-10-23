#include<iostream>
using namespace std;
void Swap(int &m,int &n)//pass by refrence
{
    int c;
    c=m;
    m=n;
    n=c;
    
}
void Swap(float &p,float &q){//function overlodding ->same funciton name but differ arguments 
    float c;
    c=p;
    p=q;
    q=c;
}

int main(){
    int a,b;
    cout<<"enter a";
    cin>>a;
    cout<<"enter b";
    cin>>b;
    swap(a,b);
    cout<<a<<b;
    cout<<endl;
    float f1=3.4;
    float f2=4.5;
    swap(f1,f2);
    cout<<f1<<endl<<f2;

}