#include<iostream>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin>>n;

    ll arr[n];
    ll sum=0, count=0;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            count++;
        }
        sum += arr[i];
    }

    if(sum - n >= count and n!=1)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    
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