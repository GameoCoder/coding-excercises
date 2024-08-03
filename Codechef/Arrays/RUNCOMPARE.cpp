/*
	Author - onenonlynitin
	Problem - https://www.codechef.com/practice/course/arrays/ARRAYS/problems/RUNCOMPARE
	Date - Aug 3 2024
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
		int brr[n] = {0};
		for(int i = 0; i < n; i++){cin >> arr[i];}
		for(int i = 0; i < n; i++){cin >> brr[i];}
		int cnt=0;
		for(int i = 0 ;i < n;i++)
		{
			int x = arr[i], y=brr[i];
			if((min(x,y)*2) >= max(x,y))
			{
				cnt++;
			}
		}
		cout << cnt << endl;
	}
}