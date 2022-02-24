#ifndef DATE_H
#define DATE_H

#include <string>

class Date {
    private:
        unsigned int _day;
        unsigned int _month;
        unsigned int _year;
        bool verification(unsigned int _d, unsigned int _m, unsigned int _y);
    public:
        Date(unsigned int _d, unsigned int _m, unsigned int _y);
        Date(std::string _date);
        Date(const Date &_orig);
        void setDate(unsigned int _d, unsigned int _m, unsigned int _y);
        void setDate(std::string _date);
        std::string toString();
        bool operator== (const Date &_other) const;
        bool operator!= (const Date &_other) const;
        bool operator< (const Date &_other) const;
        bool operator>= (const Date &_other) const;
        bool operator> (const Date &_other) const;
        bool operator<= (const Date &_other) const;

};

#endif