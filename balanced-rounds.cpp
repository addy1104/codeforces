#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
#define ll long long

void solve()
{
    ll n,k;
    cin>>n>>k;

    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    sort(arr, arr+n);
    ll count = 1;
    ll ans = 1;
    for (int i = 1; i < n; i++)
    {
        if(arr[i] - arr[i-1] > k)
        {
            count = 1;
        }
        else
        {
            count++;
        }
        ans = max(ans,count);
    }
    
    cout<<n-ans<<endl;
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