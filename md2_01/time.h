#pragma once
#include <iostream>

class Time
{
	friend std::istream& operator>>(std::istream&, Time&);
	friend std::ostream& operator<<(std::ostream&, const Time&);

public:
	Time();
	Time& operator=(const Time&);
	Time operator++();
	Time operator++(int);
	Time operator--();
	Time operator--(int);
	bool operator>(const Time&) const;
	bool operator<(const Time&) const;
	bool operator==(const Time&) const;
	bool operator!=(const Time&) const;
	bool operator>=(const Time&) const;
	bool operator<=(const Time&) const;

private:
	int hour;
	int minute;
	int second;
};