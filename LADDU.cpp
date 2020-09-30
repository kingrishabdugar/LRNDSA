#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define l long
#define ll long long
#define ull unsigned long long
#define ui unsigned int
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define ld long double
#define mp make_pair
#define pii pair<int,int>
#define mod 1000000007
#define rep(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
       ll as;
       string o;
       cin>>as>>o;
       ll total=0;
       while(as--)
       {
           string ac;
           cin>>ac;
        if(ac=="CONTEST_WON")
        {
         ll r;
         cin>>r;
         total+=300+(r<=20?(20-r):0);
        }
        else if(ac=="TOP_CONTRIBUTOR")
        {
            total+=300;
        }
        else if(ac=="BUG_FOUND")
        {
            ll s;
            cin>>s;
            total+=s;
        }
        else if("CONTEST_HOSTED")
        {
            total+=50;
        }
       }
       cout<<(total/(o=="INDIAN"?200:400))<<endl;
    }
}
