#include <iostream>
using namespace std;

int main(){
    int year;
    cout <<"Enter a year: "; //Take user input for the year
    cin >> year;

    if (year % 400 == 0){
        cout << year << " is leap year."<<endl;     //use if else to find if the input year is a leap year
    }else if (year % 100 == 0){
        cout << year << " is not a leap year,"<<endl;
    }
    else if(year % 4 == 0){
        cout << year << " is a leap year."<<endl;
    }
    else{
        cout << year << " is not a leap year."<<endl;
    }

    return 0;
}