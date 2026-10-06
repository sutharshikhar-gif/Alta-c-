/*
while (condition){
     block of code
}



*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "enter a no." << endl;
    cin>>n;
    
    int cnt = 1;
    while(cnt< n){
        cout <<cnt;
        cnt++;
    }
    return 0;
}
