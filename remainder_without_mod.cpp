#include<iostream.h>
#include<conio.h>

using namespace std;

void main()
{
	system("cls");
	int a,b,rem;
	cout<<"Enter a : ";
	cin>>a;
	cout<<"Enter b : ";
	cin>>b;
	rem = b + 1;
	while(rem>b)
	{
		rem = a/b;
		a = a-rem;
	}
	cout<<"Remainder : "<<rem;
}