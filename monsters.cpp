#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

#define ll long long 

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

    ll t;
    cin>>t;

    while(t--)
    {
        ll n,k;
        cin>>n>>k;

        ll arr[n];
        vector<pair<ll,ll> > vec;

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            arr[i] %= k;
            if(arr[i]==0)
            {
                arr[i] += k;
            }

            vec.push_back({-arr[i], i+1});
        }

        sort(vec.begin(), vec.end());

        for(int i=0 ;i<n; i++)
        {
            cout<<vec[i].second<<" ";
        }
        cout<<endl;

    }
  
  return 0;
}