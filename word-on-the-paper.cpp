#include<iostream>
#include<string>
using namespace std;
#define ll long long

void solve()
{
    string s,ans="";
    for(int i=0 ;i<8; i++)
    {
        cin>>s;
        for(int j=0; j<s.length(); j++)
        {
            if(s[j]!='.')
            {
                ans += s[j];
            }
        }
    }
    cout<<ans<<endl;
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   ll t;
   cin>>t;

   while(t--)
   {
         solve();
   }
  return 0;
}