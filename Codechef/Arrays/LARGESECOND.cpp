/*
	Author - onenonlynitin
	Problem - https://www.codechef.com/practice/course/arrays/ARRAYS/problems/LARGESECOND
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
		// std::map<key, value> map;
		map<int,int> mp;
		for(int i = 0; i < n; i++)
		{
			if(mp.find(arr[i])!=mp.end())
			{
				//if the element is found before
				mp[arr[i]]++;
			}
			mp[arr[i]]=1;	//"Key" -> 1	(Default)
		}
		int brr[n] = {0};
		int c = 0;
		for(auto it = mp.begin(); it != mp.end(); it++)
		{
			brr[c] = it->first;
			c++;
		}
		sort(brr,brr+n);
		cout << brr[n-1]+brr[n-2] << endl;
	}
}