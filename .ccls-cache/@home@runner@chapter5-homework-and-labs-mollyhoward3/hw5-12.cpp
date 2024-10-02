//hw5-12.cpp - displays the total owed
//Created/revised by <Molly Howard> on <10/2/2024>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
//declare variables
	double item1 = 0.0;
	double item2 = 0.0;
	const double DISCOUNTRATE = 0.5;
			
	//input prices
	cout << "Enter price of item 1: ";
	cin >> item1;
	cout << "Enter price of item2 : ";
	cin >> item2;

	//calculate discount
		if (item1 >= item2)
			item2 -= item2 * DISCOUNTRATE;
	//end if
	
		if (item1 < item2)
			item1 -= item1 * DISCOUNTRATE;
		//end if

	//calculate and display total owed
	cout << fixed << setprecision(2);
	cout << "Total owed: $" << item1 + item2 << endl;
	
	return 0;
}	//end of main function