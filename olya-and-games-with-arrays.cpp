#include<iostream>
#include<limits>
#include<algorithm>
#include<vector>
using namespace std;
#define ll long long

void solve()
{
    ll n,ans=0, mn = INT_MAX, mn2 = INT_MAX;
    cin>>n;

    while(n--)
    {
        ll m;
        cin>>m;
        vector<ll> v(m);
        for(ll i=0; i<m; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        ans += v[1];
        mn = min(mn,v[0]);
        mn2 = min(mn2,v[1]);
    }
    cout<<ans + mn - mn2<<endl;
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