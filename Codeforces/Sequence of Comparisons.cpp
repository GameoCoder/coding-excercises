#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int t;
	cin >> t;
	while(t--)
	{
		string str;
		cin >> str;
		//Original Array will be of size n+1, where n is str.length()
		int n = str.length();
		int g = 0, l = 0, e = 0;
		//g - greater than (">")
		//l - less than ("<")
		//e - equal ("=")
		for(int i = 0; i < n; i++)
		{
			if(str[i] == '=')
			{
				e++;
			}
			else if(str[i] == '<')
			{
				l++;
			}
			else
			{
				g++;
			}
		}
		if(g!=0 && l!=0)
		{
			//If both < and > exist, there will be no answer
			//Answer is "?"
			cout << "?";
		}
		else if(g!=0 && l==0)
		{
			//Answer is Greater than
			cout << ">" << endl;
		}
		else if(g==0 && l!=0)
		{
			//Answer is smaller than
			cout << "<" << endl;
		}
		else if(g==0 && l==0 && e!=0)
		{
			cout << "=" << endl;
		}
		else
		{
			cout << "?" << endl;
		}
	}
}