//lab5-3.cpp - displays the total amount due
//Created/revised by <Molly Howard> on <10/2/2024>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declare variables
		const double DISCOUNTRATE1 = 0.1;
		const double DISCOUNTRATE2 = 0.05;
		const double SHIPPING1 = 0.99;
		const double SHIPPING2 = 4.99;
		double price = 0.0;
		char member = ' ';

		//enter input items
		cout << "Amount owed before discount and shipping: ";
		cin >> price;
		cout << "Are you a member of the premier club? (Y/N): ";
		cin >> member;

		//calculate discount and shipping
		if (toupper(member) == 'Y')
			price -= price * DISCOUNTRATE1;
		else if (toupper(member) == 'N')
			price -= price * DISCOUNTRATE2;
		//end if

		if (price >= 100.0)
		price += SHIPPING1;
		else 
		price += SHIPPING2;
		//end if

	//dislay total amount owed
		cout << fixed << setprecision(2);
		cout << "Total amount owed after discount and shipping: $" << price << endl;
	return 0;
}	//end of main function