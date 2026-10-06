#include<iostream>
using namespace std;

// int main(){

//     int n;
//     cout<<"Enter a number between 1 to 1500: ";
//     cin>>n;
//     cout<<"You entered: "<<n<<endl;
    
//     if(n>=1100 && n<=1500){
//         cout<<"You win a cycle in prize"<<endl;
//     }
//     else if(n>=300 && n<=460){
//         cout<<"You win a macbook in prize"<<endl;
//     }
//     else if(n>=200 && n<=280){
//         cout<<"You win a kurkure in prize"<<endl;
//     }
//     else if(n>50 && n<=80){
//         cout<<"You win a Bike in prize"<<endl;
//     }
//     else{
//         cout<<"better luck next time"<<endl;
//     }
//     return 0;

// }

int main(){
    
    int n;
    cout<<"Enter any number ";
    cin>>n;
    cout<<"You entered: "<<n<<endl;
    
    if(n>=1100 && n<=1500){
        cout<<"You win a cycle in prize"<<endl;
        if(n>=1100 && n<=1300){
            cout<<"brand : Avion"<<endl;
        }
        else if(n>=1301 && n<=1500){
            cout<<"brand : Hero"<<endl;
        }
    }
    else if(n>=300 && n<=460){
        
        cout<<"You win a macbook in prize"<<endl;
        if(n>=300 && n<=380){
            cout<<"Model : M1"<<endl;
        }
        else if(n>=381 && n<=460){
            cout<<"Model : M2"<<endl;
        }
    }
    else if(n>=200 && n<=280){
        cout<<"You win a kurkure in prize"<<endl;
        if(n>=200 && n<=240){
            cout<<"Flavour : chilli"<<endl;
        }
        else if(n>=241 && n<=280){
            cout<<"Flavour : onion"<<endl;
        }
    }
    else if(n>50 && n<=80){
        cout<<"You win a Bike in prize"<<endl;
        if(n>50 && n<=65){
            cout<<"Type : bullet"<<endl;
        }
        else if(n>65 && n<=80){
            cout<<"Type : rajdoot"<<endl;
        }
    }
    else{
        cout<<"better luck next time"<<endl;
    }
    return 0;
}