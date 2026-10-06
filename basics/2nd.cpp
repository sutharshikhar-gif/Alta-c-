#include <iostream>
using namespace std; // permit for using standard library names without the std:: prefix

int main(){
    
    cout << "Native place: Rajasthan" << endl;
    int age = 20;                                // declare and initialize an integer variable 'age' with the value 20
    float height = 5.9;                          // declare and initialize a float variable 'height' with the value 5.9 only four digit after decimal point is allowed in float data type
    double weight = 70.5;                        // declare and initialize a double variable 'weight' with the value 70.5 
    bool isStudent = true;                       // declare and initialize a boolean variable 'isStudent' with the value true
    char grade = 'A';                            // declare and initialize a char variable 'grade' with the value 'A'
    cout << "Age: " << age << endl;              // output the value of 'age'
    cout << "Height: " << height << endl;        // output the value of 'height'
    cout << "Weight: " << weight << endl;        // output the value of 'weight'
    cout << "Is Student: " << isStudent << endl; // output the value of 'isStudent'
    cout << "Grade: " << grade << endl;          // output the value of 'grade'
    return 0;
}