#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void main()
{
	system("cls");
	char a;
	cout<<"Enter a capital letter : ";
	cin>>a;
	cout<<"Small letter : "<<char(tolower(a));
	(void)_getch();
}