#include<bits/stdc++.h>
using namespace std;
int main(void){
    int t;
    cin>>t;
    while(t--){
        string s,b,c;
        cin>>s;
        if(s.length()%2==0){
          for(int i=0;i<s.length()/2;++i)b+=s[i];
          for(int i=s.length()/2;i<s.length();++i)c+=s[i];
        }else{
            for(int i=0;i<s.length()/2;++i)b+=s[i];
            for(int i=s.length()/2+1;i<s.length();++i)c+=s[i];
        }
        sort(b.begin(),b.end());
        sort(c.begin(),c.end());
        cout<<((b==c)?"YES":"NO")<<endl;
    }
}
