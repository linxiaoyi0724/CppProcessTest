/*  // task 1
#include <iostream>
using namespace std;
int main()
{
int num[2];
for (int i = 0; i < 2; i++)
{
cin >> num[i];
}

int numMax = 0;
int numMin = 0;
int numTotal = 0;
if (num[0] > num[1])
{
numMax = num[0];
numMin = num[1];
}
else
{
numMax = num[1];
numMin = num[0];
}

for (int j = numMin; j <= numMax; j++)
{
numTotal += j;
}

cout << numMin << "~" << numMax << " total interger is " << numTotal << endl;
return 0;
}
*/






/*  //task 2
#include <iostream>
using namespace std;
int main()
{
int n = 0;
int total = 0;
do {
cout << "please input one interger: ";
cin >> n;
total += n;
cout << "total: " << total << endl;

} while (n != 0);
return 0;
}
*/







/*  //task 3
#include <iostream>
using namespace std;
int main()
{
double DaphneTotal = 100;
double CleoTotal = 100;
int year = 1;
while (CleoTotal <= DaphneTotal)
{
DaphneTotal += 100 * 0.1;
CleoTotal += CleoTotal * 0.05;
year++;
}
cout << year << "years, CleoTotal larger DaphneTatal." << endl;
cout << "Daphne's investment value is: " << DaphneTotal << endl;
cout << "Cleo's investment value is: " << CleoTotal << endl;
return 0;
}
*/





/* // task 4
#include <iostream>
using namespace std;
const int Month = 12;
int main()
{
char* MonthNum[Month] = { "January", "February", "March", "April", "May", "June", "July","August", "September","October","November", "December" };
int Number[12];
int NumTotal = 0;
for (int i = 0; i < 12; ++i)
{
cout << "please input " << MonthNum[i] << "sale : " << endl;
cin >> Number[i];
NumTotal += Number[i];
}
cout << "one year's sale is: " << NumTotal << endl;
return 0;
}
*/









#include <iostream>
using namespace std;
int main()
{
	cout << "hello world" << endl;
	return 0;
}