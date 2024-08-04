/*
	Author - onenonlynitin
	Problem - https://www.codechef.com/problems/XYZ343
	Date - 4 Aug 2024
*/

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int t;
	cin >> t;
	while(t--)
	{
		int x,y,z;
		cin >> x >> y >> z;
		if(x*y <= z){cout << "0\n";}
		else
		{
			int tmp = ceil((x*y-z+y-1)/y);
			cout << tmp+1 << endl;
		}
	}
}