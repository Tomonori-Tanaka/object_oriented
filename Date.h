#ifndef ___Class_Date
#define ___Class_Date

#include <ctime>
#include <iostream>
#include <sstream> 
#include <string>

class Date {
    int year_;
    int month_;
    int day_;

   public:
    int year()  const { return year_; }
    int month() const { return month_; }
    int day()   const { return day_; }

    Date() {
        time_t current = time(NULL);
        struct tm *local = localtime(&current);

        this->year_  = local->tm_year + 1900;
        this->month_ = local->tm_mon + 1;
        this->day_   = local->tm_mday;
    }

    Date(int year, int month = 0, int day = 0) {
        this->year_  = year;
        this->month_ = month;
        this->day_   = day;
    }

    Date preceding_day() const {
        int dmax[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        Date temp = *this;

        if (temp.day_ > 1) {
            temp.day_--;
        } else {
            if (--temp.month_ < 1) {
                temp.year_--;
                temp.month_ = 12;
            }
            temp.day_ = dmax[temp.month_ - 1];
        }
        return temp;
    }

    std::string to_string() const {
        std::ostringstream oss;
        oss << this->year_ << "nenn" << this->month_ << "gatsu" << this->day_
          << "nichi";
        return oss.str();
    }

    int day_of_week() const {
        int yy = this->year_;
        int mm = this->month_;
        int dd = this->day_;
        if (mm == 1 || mm == 2) {
            yy--;
            mm += 12;
        }
        return (yy + yy / 4 - yy / 100 + yy / 400 + (13 * mm + 8) / 5 + dd) % 7;
    }
};

#endif