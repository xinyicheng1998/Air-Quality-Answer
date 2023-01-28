#ifndef DATETYPE_H
#define DATETYPE_H
#include <iostream>
using namespace std;

class dateType
{
    friend ostream& operator << (ostream&, const dateType&);
    friend istream& operator >> (istream&, dateType&);

public:
    // two possible constructors:
    dateType();
    dateType(int d, int m, int y);

    // mutators:
    void setDay(int d);
    void setMonth(int m);
    void setYear(int y);
    void setDateType(int d, int m, int y);

    // accessors:
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    void print() const;

    // comparisons:
    bool operator<(const dateType& otherDate) const;
    bool operator>(const dateType& otherDate) const;
    bool operator==(const dateType& otherDate) const;
    bool operator<=(const dateType& otherDate) const;
    bool operator>=(const dateType& otherDate) const;
    bool operator!=(const dateType& otherDate) const;


private:
    // private fields for dateType class:
    int day;
    int month;
    int year;

};

#endif