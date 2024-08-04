/*
	Author - onenonlynitin
	Problem - https://www.codechef.com/problems/TCG
	Date - Aug 4 2024
*/

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int x,y;
	cin >> x >> y;
	if(x>y){cout << "DECREASED\n";}
	else if(x==y){cout << "SAME\n";}
	else{cout << "INCREASED\n";}
}