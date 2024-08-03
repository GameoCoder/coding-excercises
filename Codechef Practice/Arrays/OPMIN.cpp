/*
	Author - onenonlynitin
	Problem - https://www.codechef.com/practice/course/arrays/ARRAYS/problems/OPMIN
	Date - Aug 1, 2024
*/

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int t;cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int arr[n] = {0};
		for(int i = 0; i < n; i++){cin >> arr[i];}
		sort(arr,arr+n);
		int x = arr[0];
		int ans = 0;
		for(int i = 0; i < n; i++)
		{
			if(arr[i]!=x)
			{
				ans++;
			}
		}
		cout << ans << endl;
	}
}
