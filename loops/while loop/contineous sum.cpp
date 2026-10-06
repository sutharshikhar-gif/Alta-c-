#include <iostream>
using namespace std;

int main(){
    int sum = 0, n,n1;
    cin>>n;
    while (n>0) {
        sum += n;
        cin >> n1;
        n=n1;
        }

    cout  << sum << endl;
}