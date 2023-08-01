#include<iostream>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin>>n;

    ll sum=0;
    while(n>0)
    {
        sum += n;
        n /= 2;
    }

    cout<<sum<<endl;
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