#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin>>n;

    ll arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    int x = -1;
    if(is_sorted(arr, arr+n))
    {
        cout<<"0\n";
    }
    else
    {
         for (int i = n-1; i >= 0; i--)
        {
        if(arr[i] >= arr[i-1])
        {
            continue;
        }
        else
        {
            x = i;
            break;
        }
        }
        int ans = *max_element(arr, arr+x);
        cout<<ans<<endl;
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