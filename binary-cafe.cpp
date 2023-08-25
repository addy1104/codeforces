#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
#define ll long long

void solve()
{
    int n,k;
    cin>>n>>k;
    k = min(k,30);

    cout<<min(n+1,1<<k);


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