#include <iostream>
using namespace std;

int main()
{
	int numlist[10]; 

	int size, i, maxN, minN, largeNum, smallNum;
	
	size = 10;
	cout << "Enter 10 integers: " << endl;
	for(i = 0; i < size; i++)
	{
		cin >> numlist[i];
	}
	cout << endl;	
	
	maxN = 0;
	for(i = 0; i < size; i++)
	{
		if(numlist[maxN] < numlist[i])
		maxN = i;
	}
	largeNum = numlist[maxN];
	cout << endl;
	cout << "Largest integer: " << largeNum << endl;
	
	minN = 0;
	for(i = 0; i < size; i++)
	{
		if(numlist[minN] > numlist[i])
		minN = i;
	}
	smallNum = numlist[minN];
	cout << endl;
	cout << "Smallest integer: " << smallNum;
	
	int sumtotal = 0;
	for(i = 0; i < size; i++)
	{
		sumtotal = sumtotal + numlist[i];
	}
	cout << endl;
	cout << endl;
	cout << "Total: " << sumtotal << endl;
	
	int avg;
	avg = sumtotal / 10;
	cout << endl;
	cout << "Average: " << avg << endl;
	
	return 0;
}

