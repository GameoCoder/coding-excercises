/*
	Author - onenonlynitin
	Problem - https://www.codechef.com/problems/MAKEPERM
	Date - 12 Aug 2024
*/

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int t;cin >> t;while(t--)
	{
		int n;cin >> n;
		int arr[n] = {0};
		for(int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		//We cannot remove any numbers...
		//We only have to add numbers...
		sort(arr,arr+n);
		bool ans = true;
		for(int i = 0; i < n; i++)
		{
			if(arr[i] > i+1)
			{
				ans = false;
			}
		}
		if(ans){
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}
}