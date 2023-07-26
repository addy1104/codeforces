#include<iostream>
#include<cmath>
using namespace std;

int main()
{
   int t;
   cin>>t;

   while(t--)
   {
        int n,m,k,h;
        cin>>n>>m>>k>>h;

        int arr[h];
        for (int i = 0; i < n; i++)
        {
                cin>>arr[i];
        }

        int ans = 0;
        for(int i=0; i<n; i++)
        {
                int diff = abs(arr[i] - h);
                if(diff%k==0 && diff>0)
                {
                        if(diff/k<m)
                        {
                                ans++;
                        }
                }
        }
        cout<<ans<<endl;
   }
  
  return 0;
}