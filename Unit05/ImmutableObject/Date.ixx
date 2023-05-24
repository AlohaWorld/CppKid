import <iostream>;
import <string>;

export module module1;
export class Date;

class Date {
private:
    int year = 2019, month = 1, day = 1;
public:
    int getYear() { return year; }
    int getMonth() { return month; }
    int getday() { return day; }
    void setYear(int y) { year = y; }
    void setMonth(int m) { month = m; }
    void setDay(int d) { day = d; }
    Date() = default;
    Date(int y, int m, int d) : year{ y }, month{ m }, day{ d } {
        std::cout << "Date: " << toString() << std::endl;
    }
    std::string toString() {
        return (std::to_string(year) + "-" + std::to_string(month) + "-" + std::to_string(day));
    } // 2019-1-1
};
