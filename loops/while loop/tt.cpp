#include <iostream>
using namespace std;

int main() {
    // Write your code here
    int n;
    cin>>n;
   

    if (n>=90 && n<=100){
        cout << 'A'<<endl;
    }

    else if (n80<=n<90){
        cout << 'B' << endl;

    }
    else if (70 <=n <80){
        cout << 'C'<<endl;
    }
    else if(60<=n<70){
        cout << 'D'<< endl;

    }
    else if (0<=n<60){
        cout << 'F'<< endl;
    }
    else{
        cout << "invaid no."<<endl;
    }
    return 0;
}