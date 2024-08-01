/*
  Author- onenonlynitin
  Problem- https://cs50.harvard.edu/x/2024/psets/1/credit/
  Date- Aug 1, 2024
*/

#include <bits/stdc++.h>
using namespace std;

int CARD = -1;
//American Express - 1
//Mastercard - 2
//Visa - 3



void whichComp(string str)
{
	int x = str.length();	//Strlen gives the string length
	//American Express -> 15 digits, starts with 34 or 37
	//MasterCard -> 16 digits, starts with 51,52,53,54,55
	//Visa -> 13,16 digits, starts with 4
	if(x == 15 && str[0] == '3' && ((str[1] == '4') || (str[1]=='7')))
	{
		CARD = 1;
	}
	else if(x == 16 && str[0] == '5' && (str[1]=='1' || str[1]=='2'||str[1]=='3'||str[1]=='4'||str[1]=='5'))
	{
		CARD = 2;
	}
	else if((x==13 || x==16) && str[0]=='4')
	{
		CARD = 3;
	}
	else
	{
		CARD = -1;
	}
	return;
}

bool isValid(string str)
{
	//Luhn's Algorithm
	int x = str.length();
	int z1 = 0;	//Even
	int z2 = 0;	//Odd
	for(int i = 0; i < x; i++)
	{
		if(i%2 == 0)
		{
			//Even numbers
			int y = str[i]-48;
			y = y*2;
			if(y==0)
			{
				continue;
			}
			int size = trunc(log10(y)) + 1;
			while(size--)
			{
				int tp = y%10;
				z1+=tp;	//This contains the value we need
				y = y/10;
			}
		}
		else
		{
			int y = str[i]-48;
			z2+=y;
		}
	}
	int z3 = z1+z2;
	if(z3%10 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main(void)
{
	while(true)
	{
		string str;
		cin >> str;
		


		//Check whether the string has any other ascii value than 48, 57
		bool check = false;
		for(int i = 0; i < str.length(); i++)
		{
			if(str[i] >= 48 && str[i] <= 57)
			{
				check = true;
			}
			else
			{
				check = false;
				break;
			}
		}
		if(check == false)
		{
			continue;
		}
		

		//We use function (whichComp()) to check which company the card belongs to
		//After that we use func (isValid()) to check if its valid using Luhn's Algorithm

		whichComp(str);
		if(CARD == 1)
		{
			if(isValid(str) == true)
			{
				//AMEX and Is Valid
				cout << "AMEX\n";break;
			}
			else
			{
				cout << "INVALID\n";break;
			}
		}
		else if(CARD == 2)
		{
			if(isValid(str) == true)
			{
				//MasterCard
				cout << "MASTERCARD\n";break;
			}
			else
			{
				cout << "INVALID\n";break;
			}
		}
		else if(CARD == 3)
		{
			if(isValid(str) == true)
			{
				cout << "VISA\n";break;
			}
			else
			{
				cout << "INVALID\n";break;
			}
		}
		else if(CARD == -1)
		{
			cout << "INVALID\n";break;
		}
	}
}
