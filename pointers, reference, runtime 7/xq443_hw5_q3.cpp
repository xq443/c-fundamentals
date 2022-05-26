#include <iostream>
#include <String>
using namespace std;

string months[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
string days[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};


int printMonthCalender(int numOfDays, int startingDay) {
    for(int i = 0; i < 7; i++) {//print the header
        cout<<"\t"<<days[i];
    }
    cout<<endl;
    for(int j = 1; j < startingDay; j++) { //print leading spaces
        cout<<"\t"<<" ";
    }

    int day = 1;
    int dayOfWeek = startingDay;
    while(day <= numOfDays) {//iterate the days in the month
        cout<<"\t"<<day;
        day++;
        dayOfWeek++;
        if(dayOfWeek > 7) {//change the line after the day reaches Sunday
            cout<<endl;
            dayOfWeek = 1;
        }
    }
    cout<<endl;
    return dayOfWeek;
}


bool isLeapYear(int year) {
    if((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}

void printYearCalendar(int year, int startingDay) {
    int days;
    for(int month = 0; month < 12; month++) {// corresponding to numOfDays variable
        if(month == 3 || month == 5 || month == 8 || month == 10) {//the index of the array starts at 0, so the actual month will be +1.
            days = 30;
        } else if (month == 1 && isLeapYear(year)) {
            days = 29;
        } else if (month == 1){
            days = 28;
        } else {
            days = 31;
        }
        cout << months[month] << ", " << year << endl;
        startingDay = printMonthCalender(days, startingDay); //call the function
        cout<<endl;
    }
}

int main() {
    printYearCalendar(2016,5);
    return 0;
    }