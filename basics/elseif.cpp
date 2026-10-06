#include <iostream>
using namespace std;    

int main(){
    int a, b, c;
    cout<<"enter first number: ";
    cin>>a;
    cout<<"enter second number: ";
    cin>>b;
    cout<<"enter third number: ";
    cin>>c;

    if(a>b&& a>c){
        cout<<"a is greater than b and c"<<endl;
    }
    else if(b>c && b>a){
        cout<<"b is greater than a and c"<<endl;
    }
    else{
        cout<<"c is greater than a and b"<<endl;
    }
    
    return 0;

}