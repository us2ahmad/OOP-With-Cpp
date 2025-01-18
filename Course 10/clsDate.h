#pragma once
#pragma warning(disable: 4996)

#include <iostream>
#include <ctime>
#include <string>
#include "clsString.h"


using namespace std;

class clsDate
{
private:

	short _Day = 1;
	short _Month = 1;
	short _Year = 1900;

	void StringToDate(string DateString)
	{
		vector<string> vDate = clsString::Split(DateString, "/");

		_Day = stoi(vDate[0]);
		_Month = stoi(vDate[1]);
		_Year = stoi(vDate[2]);
	}

	static void SwapDate(clsDate& Date1, clsDate& Date2)
	{
		clsDate temp = Date1;
		Date1 = Date2;
		Date2 = temp;
	}

public:

	clsDate()
	{
		time_t t = time(0);

		tm* now = localtime(&t);

		_Day = now->tm_mday;
		_Month = now->tm_mon + 1;
		_Year = now->tm_year + 1900;
	}

	clsDate(string DateString)
	{
		StringToDate(DateString);
	}

	clsDate(short Day, short Month, short Year)
	{
		_Day = Day;
		_Month = Month;
		_Year = Year;
	}

	clsDate(short Day, short Year)
	{
		_Year = Year;
		DateAddDays(Day);
	}

	/////////////////////////
	void SetDay(short Day) 
	{
		_Day = Day;
	}
	short GetDay()
	{
		return _Day;
	}
	__declspec(property(get = GetDay, put = SetDay)) short Day;
	/////////////////////////

	/////////////////////////
	void SetMonth(short Month)
	{
		_Month = Month;
	}
	short GetMonth()
	{
		return _Month;
	}
	__declspec(property(get = GetMonth, put = SetMonth)) short Month;
	/////////////////////////
	
	/////////////////////////
	void SetYear(short Year)
	{
		_Year = Year;
	}
	short GetYear()
	{
		return _Year;
	}	
	__declspec(property(get = GetYear, put = SetYear)) short Year;
	/////////////////////////

	static clsDate GetSystemDate() 
	{
		time_t t = time(0);

		tm* now = localtime(&t);

		short Day = now->tm_mday;
		short Month = now->tm_mon + 1;
		short Year = now->tm_year + 1900;

		return clsDate(Day,Month,Year);
	}

	/////////////////////////
	static bool IsLeapYear(short Year)
	{
		return (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0);
	}
	bool IsLeapYear()
	{
		return IsLeapYear(_Year);
	}
	/////////////////////////

	/////////////////////////
	static int GetDaysFromYear(short Year)
	{
		return IsLeapYear(Year) ? 366 : 365;
	}
	int GetDaysFromYear()
	{
		return GetDaysFromYear(_Year);
	}
	/////////////////////////

	/////////////////////////
	static int GetHoursFromYear(short Year)
	{
		return GetDaysFromYear(Year) * 24;
	}
	int GetHoursFromYear()
	{
		return GetHoursFromYear(_Year);
	}
	/////////////////////////

	/////////////////////////
	static int GetMinutesFromYear(short Year)
	{
		return GetHoursFromYear(Year) * 60;
	}
	int GetMinutesFromYear()
	{
		return GetMinutesFromYear(_Year);
	}
	/////////////////////////

	/////////////////////////
	static int GetSecondsFromYear(int Year)
	{
		return GetMinutesFromYear(Year) * 60;
	}
	int GetSecondsFromYear()
	{
		return GetMinutesFromYear(_Year);
	}
	/////////////////////////

	/////////////////////////
	static short GetDaysNumberInMonth(short Year, short Month)
	{
		if (Month < 1 || Month>12)
			return 0;

		short daysNumberInMonth[]{ 31,28,31,30,31,30,31,31,30,31,30,31 };

		return Month == 2 && IsLeapYear(Year) ? 29 : daysNumberInMonth[Month - 1];
	}
	short GetDaysNumberInMonth()
	{
		return GetDaysNumberInMonth(_Year, _Month);
	}
	/////////////////////////

	/////////////////////////
	static bool IsLastDayInMonth(clsDate Date)
	{
		return GetDaysNumberInMonth(Date._Year, Date._Month) == Date._Day;
	}
	bool IsLastDayInMonth()
	{
		return IsLastDayInMonth(*this);
	}
	/////////////////////////

	/////////////////////////
	static bool IsLastMonthInYear(short Month)
	{
		return Month == 12;
	}

	bool IsLastMonthInYear()
	{
		return IsLastMonthInYear(_Month);
	}
	/////////////////////////

	/////////////////////////
	static bool IsDate1EqualDate2(clsDate Date1, clsDate Date2)
	{
		return Date2._Year == Date1._Year && Date2._Month == Date1._Month && Date2._Day == Date1._Day;
	}
	bool IsDateEqualDate2(clsDate Date2)
	{
		return IsDate1EqualDate2(*this, Date2);
	}
	/////////////////////////

	/////////////////////////
	static bool IsDate1BeforeDate2(clsDate Date1, clsDate Date2)
	{
		return Date2._Year > Date1._Year ? true : (Date2._Year == Date1._Year ? Date2._Month > Date1._Month ? true : (Date2._Month == Date1._Month ? Date2._Day > Date1._Day : false) : false);
	}
	bool IsDateBeforeDate2(clsDate Date2)
	{
		return IsDate1BeforeDate2(*this, Date2);
	}
	/////////////////////////

	/////////////////////////
	static bool IsDate1AfterDate2(clsDate date1, clsDate date2)
	{
		return !IsDate1BeforeDate2(date1, date2) && !IsDate1EqualDate2(date1, date2);

	}
	bool IsDateAfterDate2(clsDate Date2)
	{
		return IsDate1AfterDate2(*this, Date2);
	}
	/////////////////////////
	
	/////////////////////////
	static string GetMonthName(short Month)
	{
		if (Month > 12)
			return "Input Error";

		string arrayMonth[]{ "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov",  "Dec" };
		return arrayMonth[Month - 1];
	}
	string GetMonthName() 
	{
		return GetMonthName(_Month);
	}
	/////////////////////////
	
	static string GetDayName(short Day)
	{
		if (Day > 7)
			return "Input Error";

		string arrayDays[]{ "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday" };
		return arrayDays[Day - 1];
	}
	string FormateDate(string Formate = "dd/mm/yyyy")
	{
		string FormattedDate = "";
		FormattedDate = clsString::ReplaceWordInStringUsingBuiltInFunction(Formate, "dd", to_string(_Day));
		FormattedDate = clsString::ReplaceWordInStringUsingBuiltInFunction(FormattedDate, "mm", to_string(_Month));
		FormattedDate = clsString::ReplaceWordInStringUsingBuiltInFunction(FormattedDate, "yyyy", to_string(_Year));

		return FormattedDate;
	}

	/////////////////////////
	static short GetDayInCurrentMonth(clsDate Date)
	{
		short countDaysInMonth = GetDaysNumberInMonth(Date._Year, Date._Month);
		if (countDaysInMonth < Date._Day)
			return countDaysInMonth;

		return Date._Day;
	}
	short GetDayInCurrentMonth()
	{
		return GetDayInCurrentMonth(*this);
	}
	/////////////////////////

	/////////////////////////
	static short GetCountDaysFromBeginYearToEnteredDate(short year, short month, short day)
	{
		short totalDays = 0;

		for (short i = 1; i <= month - 1; i++)
			totalDays += GetDaysNumberInMonth(year, i);

		return totalDays + day;
	}
	static short GetCountDaysFromBeginYearToEnteredDate(clsDate date)
	{
		return GetCountDaysFromBeginYearToEnteredDate(date._Year, date._Month, date._Day);
	}
	short GetCountDaysFromBeginYearToEnteredDate()
	{
		return GetCountDaysFromBeginYearToEnteredDate(*this);
	}
	/////////////////////////

	void DateAddDays(short Days)
	{
		short totalDays = Days + GetCountDaysFromBeginYearToEnteredDate(*this);
		short daysInMonth;
		_Month = 1;

		while (true)
		{
			daysInMonth = GetDaysNumberInMonth(_Year, _Month);

			if (daysInMonth < totalDays)
			{
				totalDays -= daysInMonth;
				_Month++;

				if (_Month > 12)
					_Month = 1;
			}
			else
			{
				_Day = totalDays;
				break;
			}

		}
	}

	/////////////////////////
	static void Print(clsDate Date)
	{
		cout << Date._Day << "/" << Date._Month << "/" << Date._Year << endl;
	}
	void Print()
	{
		Print(*this);
	}
	/////////////////////////

	/////////////////////////
	static bool IsValidDate(clsDate Date)
	{
		if (Date._Month < 1 || Date._Month > 12)
			return false;

		if (GetDaysNumberInMonth(Date._Year, Date._Month) < Date._Day || Date._Day < 1)
			return false;

		return true;
	}
	bool IsValid()
	{
		return IsValidDate(*this);
	}
	/////////////////////////

	/////////////////////////
	static short GetDifferenceInDays(clsDate Date1, clsDate Date2, bool IncludeEndDay = false)
	{
		short days = 0;
		short swapFlagValue = 1;

		if (!IsDate1BeforeDate2(Date1, Date2))
		{
			swapFlagValue = -1;
			SwapDate(Date1, Date2);
		}

		while (!IsDate1EqualDate2(Date1, Date2))
		{
			Date1 = IncreaseDateByOneDay(Date1);
			days++;
		}
		return  (IncludeEndDay ? ++days : days) * swapFlagValue;
	}
	short GetDifferenceInDays(clsDate Date2, bool IncludeEndDay = false)
	{
		return GetDifferenceInDays(*this, Date2, IncludeEndDay);
	}
	/////////////////////////

	/////////////////////////
	static short GetDaysCountInMonth(short Year, short Month)
	{
		if (Month < 1 || Month >12)
			return 0;

		short arrayNumberDaysInMonth[]{ 31,28,31,30,31,30,31,31,30,31,30,31 };

		return Month == 2 && IsLeapYear(Year) ? 29 : arrayNumberDaysInMonth[Month - 1];
	}
	short GetDaysCountInMonth()
	{
		return GetDaysCountInMonth(_Year, _Month);
	}
	/////////////////////////

	/////////////////////////
	
	static short GetDayOrderInMonth(short Year, short Month, short Day = 1)
	{
		short a = (14 - Month) / 12;
		short y = Year - a;
		short m = Month + (12 * a) - 2;

		return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
	}
	short GetDayOrderInMonth()
	{
		return GetDayOrderInMonth(_Year,_Month,_Day);
	}
	/////////////////////////

	/////////////////////////
	static void PrintMonthCalendar(short Year,short Month)
	{
		short firstDayOrderInMonth = GetDayOrderInMonth(Year,Month);
		short countDaysInMonth = GetDaysCountInMonth(Year, Month);

		printf("\n-------------------%s-------------------\n", GetMonthName(Month).c_str());
		printf("\n  Sun  Mon  Tue  Wed  Thu  Fri  Sat \n");
	
		short i = 0;
		for (i = 0; i < firstDayOrderInMonth; i++)
			printf("     ");
	
		for (short j = 1; j <= countDaysInMonth; j++)
		{ 
			printf("%5d", j);
			if (++i == 7)
			{
				i = 0;
				printf("\n");
			}
		}

		printf("\n-----------------------------------------\n");

	}
	void PrintMonthCalendar()
	{
		PrintMonthCalendar(_Year,_Month);
	}
	/////////////////////////

	/////////////////////////
	static void PrintYearCalendar(short Year)
	{
		printf("\n-----------------------------------------\n");
		printf("\t  Calendar - %d\n", Year);

		printf("\n-----------------------------------------\n");
		for (short i = 1; i <= 12; i++)
		{
			printf("\n");
			PrintMonthCalendar(Year, i);
			printf("\n");
		}
	}
	void PrintYearCalendar()
	{
		PrintYearCalendar(_Year);
	}
	/////////////////////////

#pragma region FunctionIncreaseDate
	/////////////////////////
	static clsDate IncreaseDateByOneDay(clsDate Date)
	{
		if (IsLastDayInMonth(Date))
		{
			if (IsLastMonthInYear(Date._Month))
			{
				Date._Month = 1;
				Date._Year++;
			}
			else
				Date._Month++;

			Date._Day = 1;
		}
		else
			Date._Day++;

		return Date;
	}
	void IncreaseDateByOneDay()
	{
		*this = IncreaseDateByOneDay(*this);
	}
	/////////////////////////

	/////////////////////////
	static clsDate IncreaseDateByXDays(clsDate Date, short Days)
	{
		for (short i = 0; i < Days; i++)
		{
			Date = IncreaseDateByOneDay(Date);
		}

		return Date;
	}
	void IncreaseDateByXDays(short Days)
	{
		*this = IncreaseDateByXDays(*this, Days);
	}
	/////////////////////////

	/////////////////////////
	static clsDate IncreaseDateByOneWeek(clsDate Date)
	{
		return IncreaseDateByXDays(Date, 7);
	}
	void IncreaseDateByOneWeek()
	{
		*this = IncreaseDateByOneWeek(*this);
	}
	/////////////////////////

	/////////////////////////
	static clsDate IncreaseDateByXWeeks(clsDate Date, short Weeks)
	{
		for (short i = 0; i < Weeks; i++)
		{
			Date = IncreaseDateByOneWeek(Date);

		}

		return Date;
	}
	void IncreaseDateByXWeeks(short Weeks)
	{
		*this = IncreaseDateByXWeeks(*this, Weeks);
	}
	/////////////////////////

	/////////////////////////
	static clsDate IncreaseDateByOneMonth(clsDate Date)
	{
		if (IsLastMonthInYear(Date._Month))
		{
			Date._Month = 1;
			Date._Year++;
		}
		else
			Date._Month++;

		Date._Day = GetDayInCurrentMonth(Date);


		return Date;
	}
	void IncreaseDateByOneMonth()
	{
		*this = IncreaseDateByOneMonth(*this);
	}
	/////////////////////////

	/////////////////////////
	static clsDate IncreaseDateByXMonths(clsDate Date, short Months)
	{
		for (short i = 0; i < Months; i++)
		{
			Date = IncreaseDateByOneMonth(Date);
		}

		return Date;
	}	
	void IncreaseDateByXMonths(short Months)
	{
		*this = IncreaseDateByXMonths(*this,Months);
	}
	/////////////////////////

	/////////////////////////
	static clsDate IncreaseDateByOneYear(clsDate Date)
	{
		Date._Year++;

		Date._Day = GetDayInCurrentMonth(Date);

		return Date;
	}
	void IncreaseDateByOneYear() 
	{
		*this = IncreaseDateByOneYear(*this);

	}
	/////////////////////////

	/////////////////////////
	static clsDate IncreaseDateByXYears(clsDate Date, short Years)
	{
		for (short i = 0; i < Years; i++)
		{
			Date=IncreaseDateByOneYear(Date);

		}		return Date;
	}	
	void IncreaseDateByXYears(short Years) 
	{
		*this = IncreaseDateByXYears(*this, Years);
	}
	/////////////////////////

	/////////////////////////
	static clsDate IncreaseDateByXYearsFaster(clsDate Date, short Years)
	{
		Date._Year += Years;
		
		Date._Day = GetDayInCurrentMonth(Date);

		return Date;
	}
	void IncreaseDateByXYearsFaster(short Years)
	{
		*this = IncreaseDateByXYearsFaster(*this, Years);
	}
	/////////////////////////

#pragma endregion

#pragma region FunctionDecreaseDate

	//	stDate DecreaseDateByOneDay(stDate date)
//	{
//		if (--date.Day == 0)
//		{
//			if (--date.Month == 0) 
//			{
//				date.Month = 12;
//				date.Year--;
//			}
//			date.Day = GetDaysNumberInMonth(date.Year, date.Month);
//		}
//		
//		return date;
//	}
//
//	stDate DecreaseDateByXDays(stDate date, short days)
//	{
//		for (short i = 0; i < days; i++)
//		{
//			date = DecreaseDateByOneDay(date);
//		}
//
//		return date;
//	}
//
//	stDate DecreaseDateByOneWeek(stDate date)
//	{
//		return DecreaseDateByXDays(date,7);
//	}
//
//	stDate DecreaseDateByXWeeks(stDate date, short weeks)
//	{
//		for (short i = 0; i < weeks; i++)
//		{
//			date = DecreaseDateByOneWeek(date);
//		}
//
//		return date;
//	}
//
//	stDate DecreaseDateByOneMonth(stDate date)
//	{
//		if ( --date.Month == 0)
//		{
//			date.Month=1;
//			date.Year--;
//		}
//	
//		date.Day = GetDayInCurrentMonth(date);
//
//		return date;
//	}
//
//	stDate DecreaseDateByXMonths(stDate date, short months)
//	{
//		for (short i = 0; i < months; i++)
//		{
//			date = DecreaseDateByOneMonth(date);
//		}
//
//		return date;
//	}
//
//	stDate DecreaseDateByOneYear(stDate date)
//	{
//		date.Year--;
//
//		date.Day = GetDayInCurrentMonth(date);
//
//		return date;
//	}
//
//	stDate DecreaseDateByXYears(stDate date, short years)
//	{
//		for (short i = 0; i < years; i++)
//		{
//			date = DecreaseDateByOneYear(date);
//		}	
//		
//		return date;
//	}
//
//	stDate DecreaseDateByXYearsFaster(stDate date, short years)
//	{
//		date.Year -= years;
//
//		date.Day = GetDayInCurrentMonth(date);
//
//		return date;
//	}
//
//	stDate DecreaseDateByOneDecade(stDate date)
//	{
//		date.Year -= 10;
//
//		date.Day = GetDayInCurrentMonth(date);
//
//		return date;
//	}
//
//	stDate DecreaseDateByXDecades(stDate date, short decades)
//	{
//		return DecreaseDateByXYearsFaster(date, decades * 10);
//	}
//
//	stDate DecreaseDateByXDecadesFaster(stDate date, short decades)
//	{
//		date.Year -= (10 * decades);
//
//		date.Day = GetDayInCurrentMonth(date);
//
//		return date;
//	}
//
//	stDate DecreaseDateByOneCentury(stDate date)
//	{
//		date.Year -= 100;
//
//		date.Day = GetDayInCurrentMonth(date);
//
//		return date;
//	}
//
//	stDate DecreaseDateByOneMillennium(stDate date)
//	{
//		date.Year -= 1000;
//		
//		date.Day = GetDayInCurrentMonth(date);
//
//		return date;
//	}
//
#pragma endregion
};
