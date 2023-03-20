#include <iostream>
#include "time.h"

Time::Time()
{
	hour = minute = second = 0;
}

std::istream& operator>>(std::istream& input, Time& obj)
{
	input >> obj.hour >> obj.minute >> obj.second;
	return input;
}

std::ostream& operator<<(std::ostream& output, const Time& obj)
{
	output << (obj.hour < 10 ? "0" : "") << obj.hour << ":" << (obj.minute < 10 ? "0" : "") << obj.minute << ":" << (obj.second < 10 ? "0" : "") << obj.second << std::endl;
	return output;
}

Time& Time::operator=(const Time& right)
{
	if (this == &right)
		return *this;

	hour = right.hour;
	minute = right.minute;
	second = right.second;
	return *this;
}

Time Time::operator++()
{
	if (second == 59 && minute == 59)
	{
		second = 0;
		minute = 0;
		hour++;
	}
	else if (second == 59)
	{
		second = 0;
		minute++;
	}
	else
		second++;
	return *this;
}

Time Time::operator++(int)
{
	Time temp = *this;
	if (minute == 59)
	{
		minute = 0;
		hour++;
	}
	else
	{
		minute++;
	}
	return temp;
}

Time Time::operator--()
{
	if (minute == 0 && second == 0)
	{
		second = 59;
		minute = 59;
		hour--;
	}
	else if (second == 0)
	{
		second = 59;
		minute--;
	}
	else
		second--;
	return *this;
}

Time Time::operator--(int)
{
	Time temp = *this;
	if (minute == 0)
	{
		--hour;
		minute = 59;
	}
	else
	{
		--minute;
	}
	return temp;
}

bool Time::operator>(const Time& rigth) const
{
	if (hour > rigth.hour)
		return true;
	else if (hour == rigth.hour && minute > rigth.minute)
		return true;
	else if (hour == rigth.hour && minute == rigth.minute && second > rigth.second)
		return true;
	else
		return false;
}

bool Time::operator<(const Time& rigth) const
{
	if (hour < rigth.hour)
		return true;
	else if (hour == rigth.hour && minute < rigth.minute)
		return true;
	else if (hour == rigth.hour && minute == rigth.minute && second < rigth.second)
		return true;
	else
		return false;
}

bool Time::operator==(const Time& rigth) const
{
	if (hour == rigth.hour && minute == rigth.minute && second == rigth.second)
		return true;
	return false;
}

bool Time::operator!=(const Time& rigth) const
{
	return !(*this == rigth);
}

bool Time::operator>=(const Time& rigth) const
{
	if (*this == rigth || *this > rigth)
		return true;
	else
		return false;
}

bool Time::operator<=(const Time& rigth) const
{
	if (*this == rigth || *this < rigth)
		return true;
	else
		return false;
}