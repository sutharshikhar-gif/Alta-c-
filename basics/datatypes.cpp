#include<iostream>
using namespace std;    

// datatype in cpp 
// int, float, double, char, bool, long, short, unsigned int, signed int, long long, long double 
// int 4 __BYTE
// float 4 __BYTE
// double 8 __BYTE
// char 1 __BYTE
// bool 1 __BYTE
// long 8 __BYTE
// short 2 __BYTE
// unsigned int 4 __BYTE
// signed int 4 __BYTE
// long long 8 __BYTE
// long double 16 __BYTE

// type casting in cpp = ek data type ko dusre data type me convert karna
// chote data type se bade data type me convert karna = implicit type casting
// bade data type se chote data type me convert karna = explicit type casting


// implicit type casting example
int main() {
    char c = 'a';
    int d = c; // implicit type casting
    cout << "Value of c: " << c << endl;
    cout << "Value of d: " << d << endl;
    cout << sizeof(d) << endl;
  


// a ka 97 kese hua 
// ASCII value of 'a' is 97

// int to double
int a=10;
double b=a; // implicit type casting
cout << "Value of a: " << a << endl;
cout << "Value of b: " << b << endl;


// explicit type casting example
double x = 10.1110;
int y = (int)x; // explicit type casting
cout<< "Value of x: " << x << endl;
 cout<< "Value of y: " << y << endl;
 // it also written as
 // x= (int)x;

 // int to char
 int p = 98;
 char q = (char)p; // explicit type casting
 cout<< "Value of p: " << p << endl;
 cout<< "Value of q: " << q << endl;

 // if else
 int age;
 cout << "Enter your age: ";
 cin>> age;
 if(age>=18){
    cout<< " you are eligible in club" << endl;
 }
 else{
    cout<< " you are not eligible in club" << endl;}



int num;
cout<< "Enter a number: ";
cin>> num;
if(num%2==0){
    cout<< "The number is even" << endl;    
}
else{
    cout<< "The number is odd" << endl;}




  return 0;



}
