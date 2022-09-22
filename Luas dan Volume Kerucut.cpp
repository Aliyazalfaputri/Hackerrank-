#include<iostream>
using namespace std;
int main(){
    int r=10;
    cin>>r;
    int t;
    cin>>t;//5
    int s=5;
    cin>>s;
    float phi=3.14,volume,luas;
    
    volume= phi*r*r*t/3;
    cout<<volume<<endl;

    luas= phi*r*t;
    cout<<luas;
    return 0;    
}
