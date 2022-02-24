#include "../include/date.h"
#include "../include/dbg.h"

#include <string>

Date::Date(unsigned int _d, unsigned int _m, unsigned int _y){
    setDate(_d, _m, _y);
}

Date::Date(std::string _date){
    setDate(_date);    
}

Date::Date(const Date &_orig){
    this->_day = _orig._day;
    this->_month = _orig._month;
    this->_year = _orig._year;
}

std::string Date::toString(){
    std::string result = "";
    result += std::to_string(_day);
    result += ".";
    result += std::to_string(_month);
    result += ".";
    result += std::to_string(_year);
    return result;
}

bool Date::verification(unsigned int _d, unsigned int _m, unsigned int _y){
    _day = 0;
    _month = 0;
    _year = 0;
    if (_y < 1900) return false;
    if (_m < 1) return false;
    if (_m > 12) return false;
    if (_d < 1) return false;
    if (((_m == 1) || (_m == 3) || (_m == 5) || (_m == 7) || (_m == 8) || (_m == 10) || (_m == 12)) && (_d > 31)) return false;
    if (((_m == 4) || (_m == 6) || (_m == 9) || (_m == 11)) && (_d > 30)) return false;
    if ((_m == 2) && ((_y % 4) != 0) && (_d > 28)) return false;
    if ((_m == 2) && ((_y % 4) == 0) && (_d > 29)) return false;
    _day = _d;
    _month = _m;
    _year = _y;
    return true;
}

void Date::setDate(unsigned int _d, unsigned int _m, unsigned int _y){
    verification(_d, _m, _y);
}

void Date::setDate(std::string _date){
    std::string::size_type _begin = 0;
    int i = 0;
    unsigned int _d;
    unsigned int _m;
    unsigned int _y;
    while (i < 3){
        std::string::size_type _pos = _date.find('.', _begin);        
        std::string _temp = _date.substr(_begin, _pos - _begin);
        if (i == 0){
            _d = std::stoul(_temp);
        }
        else if (i == 1){
            _m = std::stoul(_temp);
        }
        else if (i == 2){
            _y = std::stoul(_temp);
        }
        _begin = _pos + 1;
         ++i;
    }
    verification(_d, _m, _y);
}

bool Date::operator== (const Date &_other) const{
    return ((this->_year == _other._year) && 
            (this->_month == _other._month) &&
            (this->_day == _other._day));
}

bool Date::operator!= (const Date &_other) const{
    return !(*this == _other);
}

bool Date::operator< (const Date &_other) const{
    if (this->_year < _other._year){
        return true;
    }
    else{
        if (this->_year == _other._year){
            if (this->_month < _other._month){
                return true;
            }
            else{
                if (this->_month == _other._month){
                    if (this->_day < _other._day){
                        return true;
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        else{
            return false;
        }
    }
}

bool Date::operator>= (const Date &_other) const{
    return !(*this < _other);
}

bool Date::operator> (const Date &_other) const{
    if (this->_year > _other._year){
        return true;
    }
    else{
        if (this->_year == _other._year){
            if (this->_month > _other._month){
                return true;
            }
            else{
                if (this->_month == _other._month){
                    if (this->_day > _other._day){
                        return true;
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        else{
            return false;
        }
    }
}

bool Date::operator<= (const Date &_other) const{
    return ! (*this > _other);
}
