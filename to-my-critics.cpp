#include<iostream>
using namespace std;
#define ll long long

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;

    if((a+b>=10) || (b+c)>=10 || (c+a)>=10)
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