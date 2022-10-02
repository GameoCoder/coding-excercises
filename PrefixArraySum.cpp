#include <bits/stdc++.h>
using namespace std;

//Example IO:
/*
INPUT:-
    1
    7 5
    6 3 -2 4 -1 0 -5
    0 5
    0 6
    3 5
    1 6
    2 4

OUTPUT:-
    10
    5
    3
    -1
    1
*/

int main(void)
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int q;
        cin >> q;
        //Take in array 
        int arr[n] = {0};
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int brr[n] = {0};
        brr[0] = arr[0];
        for(int i = 1; i < n; i++)
        {
            int tmp = brr[i-1] + arr[i];
            brr[i] = tmp;
        }
        //Start taking in the queries
        while(q--)
        {
            int a,b;
            cin >> a >> b;
            if(a!=0)
            {
                cout << brr[b] - brr[a-1] << endl;
            }
            else
            {
                cout << brr[b] << endl;
            }
        }
    }
}
