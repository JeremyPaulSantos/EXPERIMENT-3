#include <iostream>

using namespace std;

int main()
{
	double provinceA[7], provinceB[7], provinceC[7];
	int size, i;
	
	size = 7;
	
	cout << "Enter all the temperatures (in degrees Celsius) recorded in province A for the " << endl;
	cout << "last seven days: " << endl;
	
	for(i = 0; i < size; i++)
	{
		cout << "Province A, Day" << " " << i+1 << ": ";
		cin >> provinceA[i];
		cout << endl;
	}
	cout << endl;
	cout << "Temperatures (in degrees Celsius) recorded in province A for the last seven days" << endl;
	
	for(i = 0; i < size; i++)
	{
		cout << "Province A, Day" << " " << i+1 << " = " << provinceA[i] << endl;
	}
	
	cout << endl;
	cout << "Enter all the temperatures (in degrees Celsius) recorded in province B for the " << endl;
	cout << "last seven days: " << endl;
	
	for(i = 0; i < size; i++)
	{
		cout << "Province B, Day" << " " << i+1 << ": ";
		cin >> provinceB[i];
		cout << endl;
	}
	cout << endl;
	cout << "Temperatures (in degrees Celsius) recorded in province B for the last seven days" << endl;
	
	for(i = 0; i < size; i++)
	{
		cout << "Province B, Day" << " " << i+1 << " = " << provinceB[i] << endl;
	}

	cout << endl;
	cout << "Enter all the temperatures (in degrees Celsius) recorded in province C for the " << endl;
	cout << "last seven days: " << endl;
	
	for(i = 0; i < size; i++)
	{
		cout << "Province C, Day" << " " << i+1 << ": ";
		cin >> provinceC[i];
		cout << endl;
	}
	cout << endl;
	cout << "Temperatures (in degrees Celsius) recorded in province A for the last seven days" << endl;
	
	for(i = 0; i < size; i++)
	{
		cout << "Province C, Day" << " " << i+1 << " = " << provinceC[i] << endl;
	}

	return 0;
}


