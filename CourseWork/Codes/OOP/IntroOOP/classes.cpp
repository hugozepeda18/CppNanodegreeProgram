#include <iostream>
#include <cassert>

class Date {
    public:
        int Day(){return day_;}
        void Day(int d){
            if(d >= 1 && d <= 31) day_ = d;
        }
        int Month(){return month_;}
        void Month(int m){
            if(m>=1 && m<=12) month_ = m;
        }
        int Year(){return year_;}
        void Year(int y){
            if(y>=0) year_ = y;
        }
    private:
        int day_{1};
        int month_{1};
        int year_{0};
};
// Test in main
int main()
{
    Date date;
    date.Day(-1);
    date.Month(14);
    date.Year(2000);
    assert(date.Day() != -1);
    assert(date.Month() != 14);
    assert(date.Year() == 2000);
}
