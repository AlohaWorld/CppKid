import <iostream>;
import <string>;

export module module1;
export class Date;

class Date {
private:
	int year{ 2019 }, month{ 1 }, day{ 1 };
public:
	Date() = default;
	Date(int y, int m, int d);
	int  getYear();
	int  getMonth();
	int  getday();
	void setYear(int y);
	void setMonth(int m);
	void setDay(int d);
	std::string toString();
};
