#include<bits/stdc++.h>
using namespace std;
#define ll long long

void sol(void)
{
    char a='a';
    char b='z';
    int x = int(a)%96;
    int y = int(b);
    int z = y-x;
    cout<<x<<endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    ll t = 0;
    cin >> t;
    while (t--)
    {
        sol();
    }
    return 0;
}