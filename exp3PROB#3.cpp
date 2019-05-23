#include <iostream>
using namespace std;

int main()
{
char phrase[] = "ENGINEERING 1907";
int i;

cout << phrase << endl;
cout << endl;
cout << "The Array size is 15." << endl;
cout << endl;
cout << "Reversed Version: ";

for(i = 14; i >= 0; i--)
{
		cout << phrase[i];
}

return 0;
}

