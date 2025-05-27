/*
HEZEKIA NJOROGE
BSE-03-0128/2025
A simple cpp program to calculate and classify BMI.
*/
#include <iostream>

using namespace std;

int main() {
    
    int weight, height;
    
    cout<<"ENTER WEIGHT IN Kg: "<<endl;
    cin>>weight;
    cout<<"ENTER HEIGHT IN M: "<<endl;
    cin>>height;
    
    float BMI = weight/(height^2);
    
     cout<<"Your BMI is: "<< BMI <<endl;
     
    if (  BMI >= 30)
        cout <<"OBESITY LEVEL";

    else if ( BMI >=  25 && BMI <= 29.5)
        cout <<"You are OVERWEIGHT";
    
    else if ( BMI >=  18.5 && BMI <= 24.5)
        cout <<"You are NORMAL-WEIGHT";
    
    else if ( BMI <= 18.5)
        cout <<" You are UNDERWEIGHT";
    
        return 0;
}