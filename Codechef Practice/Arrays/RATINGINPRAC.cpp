/*
	Author - onenonlynitin
	Problem - https://www.codechef.com/practice/course/arrays/ARRAYS/problems/RATINGINPRAC
	Date - 3 Aug 2024
*/

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int arr[n] = {0};
		for(int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		bool ans = false;
		for(int i = 0; i < n-1; i++)
		{
			if(arr[i]>arr[i+1])
			{
				ans = true;
				break;
				//Answer should be No
			}
		}
		if(ans)
		{
			cout << "No\n";
		}
		else
		{
			cout << "Yes\n";
		}
	}
}