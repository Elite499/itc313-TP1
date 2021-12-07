
#include <iostream>
#ifndef DATE_H
#define DATE_H
class Date {
public:
    Date();
    Date(int years=2021, int month=1, int day=1);
    int month() const;
    int day() const;
    int years() const;

    bool isBissextile();
    void updateMonth(int month);
    void updateDay(int day);


    void next();
    void back();
private:
    int _years;
    int _month;
    int _day;

};

bool isDate(int month, int day, int years);
bool isyearBissextile (int years);
int getDaysInMonth(int month, int years);
int dayOfYear(Date d);
std::string toString(Date d);


#endif // DATE_H
