#include<iostream>
using namespace std;

int main()
{	//NWD
	int a,b;
	int iloczyn;
	int NWW;
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	cout << "NWD(" << a << "," << b << ") = ";
	iloczyn = a * b;
	while (a != b)
	{
		if (a < b) 
			b = b - a;
		else
			a = a - b;
	}
	NWW = iloczyn / a;
	cout << a << endl;
	cout << NWW << endl;
	return 0; 
} 