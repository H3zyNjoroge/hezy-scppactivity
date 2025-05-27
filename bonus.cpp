/*
HEZEKIA NJOROGE
BSE-03-0128/2025
A simple cpp program to calculate Bonus and Total Salary.
*/
#include <iostream>

using namespace std;
int main() {
    
    float salary, years_of_service, bonus, total_salary;
    
    cout<<"ENTER CURRENT SALARY: "<<endl;
    cin>>salary;
    cout<<"ENTER NUMBER OF YEARS YOU HAVE SERVED: "<<endl;
    cin>>years_of_service;
    
    if (  years_of_service >= 10){
        bonus = 0.1 * salary;
        total_salary = bonus + salary;
    }

    else if (years_of_service >=  6 && years_of_service <= 10){
        bonus = 0.08 * salary;
       total_salary = bonus + salary;
    }
      else if (  years_of_service >= 6){
        bonus = 0.06 * salary;
        total_salary = bonus + salary;
    }   
    cout<<"YOUR NET BONUS IS: "<< bonus<<endl;
    cout<<"YOUR TOTAL SALARY IS: "<<total_salary<<endl;
    return 0;
}