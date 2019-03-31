/*CPP PROGRAM TO CALCULATE AGE ACCORDING TO CURRENT DATE WITHOUT CLASS
-Geshwar Kumar
-18/07/2016*/

#include<iostream>
using namespace std;
/*VARIABLE DECLARATION GLOBALY*/
	short age,day,month,cur_day,cur_month,res_age,brw_day,res_day,b_day ;
	int year,cur_year ;
/*FUNCTION DECLARATION*/
	void CalAge()	//INITIAL VALUES USING FUNCTION
	{
		day = 0 ,cur_day = 0 ,month = 0, cur_month = 0;
		res_day = 0, res_age = 0, brw_day = 0;
		year = 0,cur_year = 0 ;
	}
	void Input();	//FOR INPUT
	void Calculate();	//FOR CALCULATION
	void Output();		//FOR OUTPUT
	void ChkLeap(int);	//FOR CHECK LEAP YEAR

/*FUNCTION DEFINTION*/
	void Input()
	{
		cout << "\n Enter current date:";/*INPUT CURRENT DATE*/
		cout << "\n\tDay(1 to 31) :";reincur_day : cin >> cur_day;
		if(cur_day >= 1 && cur_day <= 31)
		{
			cout << "\tMonth(1 to 12) :"; reincur_month : cin >> cur_month;
			if(cur_month >= 1 && cur_month <= 12)
			{
				cout << "\tYear(1900 to 2050) :"; reincyy : cin >> cur_year;
				if(cur_year >= 1900 && cur_year <= 2050)
				{
					goto DOB;
				}
				else
				{
					cout << "Please reenter year(1900 to 2050) :";
					goto reincyy ;
				}
			}
			else
			{
				cout << "Please reenter month(1 to 12) :";
				goto reincur_month ;
			}
		}
		else
		{
			cout << "Please reenter day(1 to 31) :";
			goto reincur_day ;
		}
		/*INPUT DATE OF BIRTH*/
	DOB : cout << "\n Enter birth date:";
		cout << "\n\tDay(1 to 31) :";reinday : cin >> day;
		if(day >= 1 && day <= 31)
		{
			cout << "\tMonth(1 to 12) :";reinmonth : cin >> month;
			if(month >= 1 && month <= 12)
			{
				cout << "\tYear(1900 to 2050) :";reinyy : cin >> year;
				if(year >= 1900 && year <= 2050)
				{
					goto calculate;
				}
				else
				{
					cout << "Please re-enter year(1900 to 2050) : ";
					goto reinyy ;
				}
			}
			else
			{
				cout << "Please reenter month(1 to 12) : ";
				goto reinmonth ;
			}
		}
		else
		{
			cout << "Please reenter day(1 to 31) : ";
			goto reinday ;
		}
	calculate : //sm = cur_month ;
		/*FIND DAY ACCORDING TO MONTHS*/
		switch(cur_month)
		{
			case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 :
				b_day = 31 ;
			break;
			case 4 : case 6 : case 9 : case 11 :
				b_day = 30 ;
			break;
			case 2 :
				ChkLeap(cur_year);
			break;
		}/*END SWITCH*/
	}
	void ChkLeap(int cur_year)
	{
	/*FOR FEBRUARY*/
		if(cur_year % 400 == 0 || cur_year % 4 == 0)
		{
			b_day = 29 ;
		}
		else if(cur_year % 100 == 0 || cur_year % 400 != 0 || cur_year % 4 != 0)
		{
			b_day = 28 ;
		}
	}
	void Calculate()
	{
		/*CALCULTAE AGE*/
		if (day == cur_day && month == cur_month)
		{
			day = cur_day - day ;
			month = cur_month - month ;
			age = cur_year - year ;
		}
		else if(day > cur_day && month == cur_month)
		{
			day = ( cur_day + b_day ) - day ;
			cur_month -= 1 ;				//REMAINING CURRENT MONTH
			month = (cur_month + 12) - month ;
			age = (cur_year - 1) - year ;
		}
		else if(day < cur_day && month == cur_month)
		{
			day = cur_day - day ;
			month = cur_month - month ;
			age = cur_year - year ;
		}
		else if(day ==cur_day && month < cur_month)
		{
			day = cur_day - day ;
			month = cur_month - month ;
			age = cur_year - year ;
		}
		else if(day == cur_day && month > cur_month)
		{
			day = cur_day - day ;
			month = (cur_month + 12) - month ;
			age = (cur_year - 1) - year ;
		}
		else if(day != cur_day && month!= cur_month)
		{
			if((cur_day == 01 && cur_month == 01) || (day > cur_day && month > cur_month))
			{
				day = (cur_day + b_day) - day ;
				cur_month -= 1 ;
				month = (cur_month + 12) - month ;
				age = (cur_year - 1) - year ;
			}
			else
			{
				day = cur_day - day ;
				month = cur_month - month ;
				age = cur_year - year ;
			}
		}

	}
	void Output()
	{
		/*OUTPUT CALCULATED AGE DETAILS*/
		cout << "\nCalculated age details are :>>";
		cout << "\n***************************************************\n";
		cout << "\n You are " << age << " years, " << month << " months & " << day << " days old.";
		cout << "\n\n***************************************************\n";
	
	}
	int main()	/*MAIN FUNCTION START*/
	{
		/*FUNCTIONS CALLING*/
		CalAge();	//INITIAL VALUES USING FUNCTION
		Input();	//FOR INPUT
		//ChkLeap(int);	//FOR CHECK LEAP YEAR		
		Calculate();	//FOR CALCULATION
		Output();		//FOR OUTPUT
	return 0;
	}
