#include<iostream>
using namespace std;
#define ll long long

void solve()
{
    int n,m;
    cin>>n>>m;

    int a[n], b[m];
    ll sum_a=0, sum_b=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        sum_a += a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
        sum_b += b[i];
    }
    
    if(sum_a > sum_b)
    {
        cout<<"Tsondu\n";
    }
    else if(sum_a < sum_b)
    {
        cout<<"Tenzing\n";
    }
    else
    {
        cout<<"Draw\n";
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