#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main ()
{
	float arr [15];
	int in, a;
	float b, c, sum;

	cout << " Input an array of 15 integers: " << endl;

	for (in = 0; in < 15; in++)
	{
		cin >> arr[in];}
	for (in = 0; in < 15; in++)
	
	{ for (a = in + 1; a < 15; a++)
		
		{ for (in = 1; in < 15; in++)
			
			{ if (arr [in] > arr [a])
			  
				{ b = arr [in];
				  arr [in] = arr [a];
				  arr [a] = b;}
			 }
		 }
	 } 
	  c = arr [0];
	  sum = 0;
	  for (in = 0; in < 15; in++)
	  {
		  if (c > arr [in])
			  c = arr [in];
			 sum += arr [in];
	  }
	  cout << " " << endl;

	  cout << "The smallest integer is: " << c << endl;

	  cout << "The largest integer is: " << b << endl;

	  cout << "The sum of the integers is: " << sum << endl;

	  cout << "The total average is: " << setprecision (2)<< fixed << sum/15 << endl;
	 
	getch ();
	return 0;
 }
