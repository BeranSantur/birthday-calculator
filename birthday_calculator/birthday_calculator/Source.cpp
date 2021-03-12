#include <iostream>

using namespace std;
int main()
{

	cout << "Please enter your birth day: ";
	int entered_day = 0;
	cin >> entered_day;

	cout << "Please enter your birth month: ";
	int entered_month = 0;
	cin >> entered_month;

	cout << "Please enter your birth year: ";
	int entered_year = 0;
	cin >> entered_year;

	int sum_days = entered_day+(entered_month*30)+(entered_year*365);

	int sum_today = 12 + (3 * 30) + (2021 * 365);

	int sum_age = sum_today - sum_days;

	int sum_years = sum_age / 365;
	sum_age = sum_age % 365;
	
	int sum_months = sum_age / 30;
	sum_age = sum_age % 30;

	int remain_days = sum_age;

	if (sum_years > 0 )
	{
		if (sum_months >= 6)
		{
			cout << "Your are " << sum_years << " and half years old." << endl;
		}
		else {
			cout << "You are " << sum_years << " years old" << endl;
		}
	}
	else {
		cout << "Please enter a valid age" << endl;
	}


	return 0;
}