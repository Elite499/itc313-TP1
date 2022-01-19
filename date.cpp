
#include "date.h"
#include <assert.h>
#include <string>
#include <sstream>


template <typename T>
std::string ToString(T val)
{
std::stringstream stream;
stream << val;
return stream.str();
}

Date::Date() {}
Date::Date( int years, int month, int day) : _years(years), _month(month), _day(day) {
    bool status = isDate(month, day, years);
    assert(status && "Date is not valid");
}

int Date::years() const {
    return _years;
}
int Date::month() const {
    return _month;
}

int Date::day() const {
    return _day;
}

// TODO A ENLEVER
bool Date::isBissextile() {
    bool status = isyearBissextile(_years);
    if((status==true) && (_month == 2))
        return true;
    else
        return false;
}

void Date::updateMonth(int month) {
    bool status = isDate(month, _day, _years);
    assert(status==true && "New month is not valid");
    _month = month;
}

void Date::updateDay(int day) {
    bool status = isDate(_month, day, _years);
    assert(status==true && "New day is not valid");
    _day = day;
}

void Date::next() {


    if ((_month==12) && (_day==31)) {
        _day=1;
        _month=1;
        _years+=1;
    }
    else if (_day==getDaysInMonth(_month, _years)) {
        _day=1;
        _month++;
    }
    else {
        _day++;

    }

}

void Date::back() {
    if ((_month==1) && (_day==1)) {
        _day=31;
        _month=12;
        _years -=1 ;
    }
    else if (_day==1) {
        _month--;
        _day=getDaysInMonth(_month, _years);
    }
    else {
        _day--;
    }
}


/**
 *
 * Helper functions
 *
*/

bool isDate(int month, int day, int years) {
    if ((day < 1) || (day>31)) return false;
    if ((month <1) || (month>12)) return false;
    if ((month == 2) && (day > 28) && !isyearBissextile(years)) return false;
    if ((month == 2) && (day > 29) && isyearBissextile(years)) return false;
    if (((month == 4) || (month == 6) ||
         (month == 9) || (month == 11)) && (day > 30)) return false;

    return true;
}

bool isyearBissextile(int years ){
    if (((years & 3) == 0) &&(((years % 100) != 0)||((years % 400)==0)))
        return true ;
    else
        return false ;
}
int getDaysInMonth(int month, int year) {
    assert(((month >=1) && (month<=12)) && "Month is not valid");
    if (month == 2 && !isyearBissextile(year)) return 28;
    if (month == 2 && isyearBissextile(year)) return 29;
    if ((month == 1 || month == 3 || month == 5 || month == 7
         || month == 8 || month == 10 || month == 12)) return 31;
    return 30;
}

int dayOfYear(Date d) {
    int day=0;
    for ( int i=1;i<d.month();i++) {
        day+=getDaysInMonth(i, d.years());
    }
    day+= d.day();
    return day;
}

std::string toString(Date d) {
    //std::string datetest= d.day()+"/"+d.month()+"/"+d.years() ;
    //return datetest ;
    return ToString(d.day()) + "/" + ToString(d.month()) +"/" + ToString(d.years()) ;
}

