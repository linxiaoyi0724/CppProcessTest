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










/*
//task 2
#include <iostream>
#include <cctype>
using namespace std;
const int nSize = 10;
int main()
{
	double donation[nSize];
	int count = 0;
	double total = 0;
	int largeCount = 0;
	cout << "Please input first donation: ";
	cin >> donation[count];
	while (cin.good() && count < 9)
	{
		count++;
		cout << "Please input " << count << " donation: ";
		cin >> donation[count];
	}

	if (count != 9 && count != 0)
	{
		count--;
	}

	for (int i = 0; i < count + 1; i++)
	{
		total += donation[i];
	}
	double average = total / (count + 1);

	for(int j = 0; j < count + 1; j++)
	{
		if (donation[j] > average)
		{
			largeCount++;
		}
	}
	cout << "The average donation is " << average << endl;
	cout << "There have " << largeCount << " larger donation." << endl;
	return 0;
}
*/




/*
#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout << "Please enter one of the following choices: "<<endl;
	cout << "c) carnivore         p) pianist" << endl;
	cout << "t) tree              g) game" << endl;

	cin >> ch;
	while (!(ch=='c' || ch =='p' || ch== 't' || ch=='g'))
	{
		cout << "Please enter a c, p, t, or g: ";
		cin >> ch;
	}

	switch (ch)
	{
	case 'c':
		cout << "A maple is a carnivore." << endl;
		break;
	case 'p':
		cout << "A maple is a pianist." << endl;
		break;
	case 't':
		cout << "A maple is a tree." << endl;
		break;
	default:
		cout << "A maple is a game." << endl;
		break;
	}
	return 0;
}
*/


