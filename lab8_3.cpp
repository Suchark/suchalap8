#include<iostream>
using namespace std;

char before(char x)
{
	if(x > 'A' && x <= 'Z')
	{
		return x - 1;
	}
	if(x == 'A')
	{
		return 'Z';
	}
	else
	{
		return '0';
	}
}