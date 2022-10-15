#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define rep(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll g;
        cin>>g;
        while(g--)
        {
          ll i1,n,q;
          cin>>i1>>n>>q;
          ll h,t;
            if(n%2==0)
            h=t=n/2;
            else
              if(i1==1)
              {
                  h=(n-1)/2;
                  t=(n+1)/2;
                  
              }
              else
              {
                  t=(n-1)/2;
                  h=(n+1)/2;
              }
              
              if(q==1) cout<<h<<endl;
              else cout<<t<<endl;
        }
        
    }
}
