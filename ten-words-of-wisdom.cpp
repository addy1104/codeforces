#include<iostream>
#include<algorithm>
#include<limits>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin>>n;

    int a[n],b[n];
    int ans;
    int index = INT_MIN;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        cin>>b[i];
        if(a[i]<=10)
        {
            index = max(index,b[i]);
            if(index==b[i])
            {
                ans = i;
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