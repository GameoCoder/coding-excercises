/*
	Author - onenonlynitin
	Problem - https://www.codechef.com/problems/BUDGET25
	Date - Aug 4, 2024
*/

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int t;
	cin >> t;
	while(t--)
	{
		long long int n,x;
		cin >> n >> x;
		long long int arr[n] = {0};
		for(int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		sort(arr,arr+n);
		// reverse(arr,arr+n);
		long long int ans = 0;
		long long int sur = 0;
		for(int i = n-1; i >= 0; i--)
		{
			if(arr[i]==x){ans++;}
			else if(arr[i]>x)
			{
				ans++;
				sur=sur+(arr[i]-x);
			}
			else if(arr[i]<x)
			{
				long long int tmp = x-arr[i];
				if(sur-tmp >= 0)
				{
					sur = sur - tmp;
					ans++;
				}
				else
				{
					break;
				}
			}
		}
		cout << ans << endl;
	}
}