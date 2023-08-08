#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
#define ll long long

void solve()
{
    string s;
    cin>>s;

    reverse(s.begin(), s.end());
    s += '0';
    ll j = 0;
    for(ll i=0; i<s.length(); i++)
    {
        if(s[i] >= '5')
        {
            s[i+1]++;
            for(ll k=i; k>=j; k--)
            {
                s[k] = '0';
            }
            j = i;
        }
    }
    reverse(s.begin(), s.end());
    int st = 0;
    if(s[0]=='0')
    {
        st++;
    }
    for(ll i=st; i<s.length(); i++)
    {
        cout<<s[i];
    }
    cout<<endl;

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