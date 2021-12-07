#include "date.h"
#include <iostream>



int main(int argc, char const *argv[]) {
    Date a_day(2020,2,29);
    std::cout << "a day: " << toString(a_day) << std::endl;
    std::cout << "day #" << dayOfYear(a_day) << std::endl;
    a_day.next();
    std::cout << "a day++: " << toString(a_day) << std::endl;
    a_day.back();
    std::cout << "a day: " << toString(a_day) << std::endl;
    return 0;
}


