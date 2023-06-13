#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

class DayofYear
{
private:
	int day;
	int date;
	static string month;
public:
	DayofYear();
	DayofYear(int);
	void setDay(int);
	void setDate(int);
	int getDay();
	int getDate();
	string getMonth();
	void print();
};
DayofYear::DayofYear()
{
	day = 0;
	date = 0;
	month = "";

}
DayofYear::DayofYear(int d)
{
	day = d;
	date = 0;
	month = "";
}
string DayofYear::month = "";
void DayofYear::setDay(int d)
{
	day = d;
}
void DayofYear::setDate(int da)
{
	date = da;
}
int DayofYear::getDay()
{
	return day;
}
int DayofYear::getDate()
{
	return date;
}
string DayofYear::getMonth()
{
	return month;
}
void DayofYear::print()
{
	if ((day > 0) && (day < 32))
	{
		month = "January";
		date = day;
	}
	else if ((day > 31) && (day < 60))
	{
		month = "February";
		date = day - 31;
	}
	else if ((day > 59) && (day < 91))
	{
		month = "March";
		date = day - 59;
	}
	else if ((day > 90) && (day < 121))
	{
		month = "April";
		date = day - 90;
	}
	else if ((day > 120) && (day < 152))
	{
		month = "May";
		date = day - 120;
	}
	else if ((day > 151) && (day < 182))
	{
		month = "June";
		date = day - 151;
	}
	else if ((day > 181) && (day < 213))
	{
		month = "July";
		date = day - 181;
	}
	else if ((day > 212) && (day < 244))
	{
		month = "August";
		date = day - 212;
	}
	else if ((day > 243) && (day < 274))
	{
		month = "September";
		date = day - 243;
	}
	else if ((day > 273) && (day < 305))
	{
		month = "October";
		date = day - 273;
	}
	else if ((day > 304) && (day < 335))
	{
		month = "November";
		date = day - 304;
	}
	else if ((day > 334) && (day < 366))
	{
		month = "December";
		date = day - 334;
	}

	cout << " " << endl;
	cout << "This converts to:" << endl;
	cout << month << " " << date << endl;

}

int main()
{
	int in;

	cout << "Enter a date in pure digit form:" << endl;
	cin >> in;
	DayofYear date1(in);
	date1.print();
}