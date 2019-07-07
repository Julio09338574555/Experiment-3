#include <iostream>
#include <conio.h>

using namespace std;
  
int main()
{
    char input[100], output[100];
	int count, i;
      
    cout << "Enter number of elements in array: ";
    cin >> count;
     
    cout << "Enter " << count << " characters: ";
      
    for(i = 0; i < count; i++)
	{
        cin >> input[i];
    }
      
    for(i = 0; i < count; i++)
	{
        output[i] = input[count-i-1];
    }    
    
    cout << " " << endl;

	cout << "Reversed Array: ";
    for(i = 0; i < count; i++)
	{
        cout << output[i] << " ";
    }

    cout << " " << endl;
    cout << " " << endl;

    getch();
    return 0;
}