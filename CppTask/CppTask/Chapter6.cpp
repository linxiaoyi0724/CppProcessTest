/*
// task 1
#include <iostream>
#include <cctype>
using namespace std;
int main()
{
	char* ch = new char[30];
	int count = -1;
	cout << "Please input: ";
	do {
		++count;
		cin >> ch[count];
	} while (ch[count] != '@');

	for (int i = 0; i < count; i++)
	{
		if (ch[i] >= 48 && ch[i] <= 57)
		{
			continue;
		}
		else if (isupper(ch[i]))
		{
			cout << char(tolower(ch[i]));
		}
		else if(islower(ch[i]))
		{
			cout << char(toupper(ch[i]));
		}
		else
		{
			cout << char(ch[i]);
		}
	}
	cout << endl;
	return 0;
}
*/