#include<iostream>
#include<cmath>
using namespace std;
#define ll long long

void solve()
{
    ll n,c;
    cin>>n>>c;
    ll sum = 0;
    ll sq_sum = 0;
    ll arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum += arr[i];
        sq_sum += arr[i]*arr[i];
    }

    ll left = c - sq_sum;
    ll u = sum/n;

    ll ans = (sqrt(u*u + left/n)-u)/2;

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