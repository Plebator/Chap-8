/*
 * C++ Homework Chapter 8
 *
 * Name: Plebator
 * Date: October 30, 2018
 */

#include <iostream>

using namespace std;
//Bus Fare Calculator
int main()
{
	//Declarations
	const int PASS = 4;
	const int ZONE = 4;
	double busFare [PASS] [ZONE] = { { 7.50, 10.00, 12.00, 12.75},
									{ 14.00, 18.50, 22.00, 23.00},
									{ 20.00, 21.00, 32.00, 33.00},
									{ 25.00, 27.50, 36.00, 37.00}};
	int passengers;
	int zone;
	
	for (passengers = 0; passengers != -1;)
	{
		cout << "Passengers? " << endl;
		cin >> passengers;
		if (passengers != -1)
		{
			cout << "Zones? " << endl;
			cin >> zone;
			cout << "$" << busFare[passengers - 1][zone] << endl;
		}
		else
		{
			cout << "Done" << endl;
		}
	}
									
	return 0;
}
