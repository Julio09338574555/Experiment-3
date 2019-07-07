#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main ()
{
	double PA [70], PB [70], PC [70];
	int count;
	 
	cout << "Enter all temperature for a week of Province A, Province B and then Province C." << endl;
	 
	 for (count = 1; count <= 7; count++)
	 
	{cout << "Province A, Day " << count << ": "; cin >> PA [count];}

	cout << " " << endl;

	 for (count = 1; count <= 7; count++)
	 
	{cout << "Province B, Day " << count << ": "; cin >> PB [count];}

	cout << " " << endl;

	 for (count = 1; count <= 7; count++)
	 
	{cout << "Province C, Day " << count << ": "; cin >> PC [count];}
	cout << " " << endl;

	cout << "Displaying Values:" << endl;

	 for (count = 1; count <= 7; count++)
	
	{cout << "Province A, Day " << count << "= "<< PA [count] << endl;}

	cout << " " << endl;

	 for (count = 1; count <= 7; count++)
	
	{cout << "Province B, Day " << count << "= "<< PB [count] << endl;}

	cout << " " << endl;

	 for (count = 1; count <= 7; count++)
	 
	{cout << "Province C, Day " << count << "= "<< PC [count] << endl;}


	 getch ();
	 return 0;
 }
