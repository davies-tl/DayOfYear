/*
Program name: DayOfYear.cpp
Programmer: Tyler Davies
Date: 9-25-21
Version: 1.0
Description: This program contains a class named DayOfYear. Assuming that a year has 365 days, it takes
             an integer representing a day of the year and translates it to a string consisting of the
             month followed by the day of the month.
*/

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//This class takes the day of the year and splits it into a month and day format.
class DayOfYear
{
private:
    static string month;
    int dayOfYear, dayOfMonth;
    void convertToMonthDay(const int);
public:
    DayOfYear(int);
    void print()    //This function displays the month and day format.
    {
        cout << "\nDay " << dayOfYear << " would be " << month << " " << dayOfMonth << "." << endl;
    }
};

//This constructor takes an integer parameter representing the day of the year (setting default to 1).
//It stores the variable, and calls the function converting day of the year to month and day variables.
DayOfYear::DayOfYear(int day = 1)
{
    dayOfYear = day; 
    convertToMonthDay(day);
}

//This function converts the day of the year to month and day.
//It checks for invalid input and stores the updated day format in two variables.
void DayOfYear::convertToMonthDay(const int day)
{
    if (day >= 1 && day <= 31)
    {
        dayOfMonth = day;
        month = "January";
    }
    else if (day > 31 && day <= 59)
    {
        dayOfMonth = day - 31;
        month = "February";
    }
    else if (day > 59 && day <= 90)
    {
        dayOfMonth = day - 59;
        month = "March";
    }
    else if (day > 90 && day <= 120)
    {
        dayOfMonth = day - 90;
        month = "April";
    }
    else if (day > 120 && day <= 151)
    {
        dayOfMonth = day - 120;
        month = "May";
    }
    else if (day > 151 && day <= 181)
    {
        dayOfMonth = day - 151;
        month = "June";
    }
    else if (day > 181 && day <= 212)
    {
        dayOfMonth = day - 181;
        month = "July";
    }
    else if (day > 212 && day <= 243)
    {
        dayOfMonth = day - 212;
        month = "August";
    }
    else if (day > 243 && day <= 273)
    {
        dayOfMonth = day - 243;
        month = "September";
    }
    else if (day > 273 && day <= 304)
    {
        dayOfMonth = day - 273;
        month = "October";
    }
    else if (day > 304 && day <= 334)
    {
        dayOfMonth = day - 304;
        month = "November";
    }
    else if (day > 334 && day <= 365)
    {
        dayOfMonth = day - 334;
        month = "December";
    }
    else
    {
        cout << left << "\n" << setw(7) << "Error: " << "Invalid day of the year entered!" << endl;
        cout << setw(7) << " " << "Terminating Program." << endl;
        exit(0);
    }
}

//Since month is a static string, its definition must be written outside of the class.
//Holds a temporary string value.
string DayOfYear::month = " ";

//Main function asks the user for an integer value between 1 and 365.
//It creates a day object from the DayOfYear class, and uses its print function to print the new format.
int main()
{
    int userValue;
    cout << "Please enter an integer between 1-365 representing the day of a year: " << endl;
    cin >> userValue;

    DayOfYear day(userValue);
    day.print();

    exit(0);
}