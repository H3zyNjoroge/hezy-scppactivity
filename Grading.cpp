/*
HEZEKIA NJOROGE
BSE-03-0128/2025
A simple cpp program to calculate and grade 3 subjects.
*/

#include <iostream>

using namespace std;

int main() {
    
    int marks1, marks2, marks3;
    
    cout<<"ENTER MARKS 1: "<<endl;
    cin>>marks1;
    cout<<"ENTER MARKS 2: "<<endl;
    cin>>marks2;
    cout<<"ENTER MARKS 3: "<<endl;
    cin>>marks3;
    
    float Average= (marks1 + marks2 + marks3)/3.0;
    
     cout<<"Your Average is: "<< Average <<endl;
     
    if (  Average >= 70)
        cout <<"You scored an A";

    else if ( Average >=  60 && Average <= 69)
        cout <<"You scored a B";
    
    else if ( Average >=  50 && Average <= 59)
        cout <<"You scored a C";
    
    else if ( Average >=  40 && Average <= 49)
        cout <<"You scored a D";
    
    else if ( Average <= 39)
        cout <<" You scored an E. YOU FAIL";
    return 0;
}