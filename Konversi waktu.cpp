#include<iostream>
using namespace std;
int main(){
    int detik;
    cin>>detik;
    int b;
    cin>> b;
    int c;
    cin>> c;
    cout<<detik/3600<<" ";
    
    b=detik%3600;
    cout<<b/60<< " ";
    
    c=detik%60;
    cout<<c;
    return 0;
}
