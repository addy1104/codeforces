#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int ans = 0;
    for(int i=0; i<n/2; i++)
    {
        ans += arr[n-1-i] - arr[i];
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