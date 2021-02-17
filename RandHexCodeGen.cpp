#include<iostream>
#include<string>
using namespace std;

string RandHEX(int x)
{
	string ArrNewHex = "";
	if (x == 6 || x == 8)
	{
		ArrNewHex += "#";
		string HEXVAL = "123456789ABCDEF";
		for (int i = 0; i < x; i++)
		{
			int r = rand() % 14 + 0;
			char rx = HEXVAL[r];
			ArrNewHex += rx;
		}
		return ArrNewHex;
	}
	else
	{
		return ArrNewHex;
	}
}

int main()
{
	int x = 0;
	cout << "Q::>  Please enter a Number (6 pr 8) of which length a random HEX code to genrate?  "<<"\n\n";
	cin >> x;
	cout << "\n";
	string HEX = RandHEX(x);
	cout << "A::>  " << HEX << "\n\n";
	return 0;
}
