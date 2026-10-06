#include <iostream>
 using namespace std;

 int main(){
    
    int marks;
    int score;
    int sports; 

    cout<<"enter your marks\n";
    cin>> marks;
    cout<<"enter your score\n";
    cin>> score;

    if(marks>=75 && score>=80){
        cout<<"are you a sports person? (1 for yes, 0 for no)\n";
        cin>>sports;

        if(sports==1){
            cout<<"you get admission and also get a scholarship\n";
        }
        else{
            cout<<" you get only admission";
        }
    }
    
    else{
        cout<<" you dont get admission";
    }
    return 0;

 }
