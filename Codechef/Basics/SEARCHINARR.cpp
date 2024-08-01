/*
  Author - onenonlynitin
  Problem - https://www.codechef.com/practice/course/arrays/ARRAYS/problems/SEARCHINARR
  Date - Aug 1 2024
*/

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n,x;
    cin >> n >> x;
    bool ans = false;
    for(int i = 0; i < n; i++)
    {
        int tmp;cin >> tmp;
        if(tmp == x)
        {
            ans = true;
        }
    }
    if(ans){cout << "YES\n";}else{cout << "NO\n";}
}
