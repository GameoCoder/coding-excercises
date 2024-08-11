/*
    Author - onenonlynitin
    Problem - https://www.codechef.com/problems/LARGESTK
    Date - 11 Aug 2024
*/


#define ll long long
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;cin >> t;while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> vec(n+1,0);
        for(ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            vec[x]++;
        }
        sort(vec.begin(),vec.end());
        reverse(vec.begin(),vec.end());
        ll ans = 0, sum = 0;
        for(ll i = 0; vec[i]; i++)
        {
            int now = i+1;
            sum+=vec[i];
            ans=max(ans,(sum/now)*now);
        }
        cout << ans << endl;
    }
}