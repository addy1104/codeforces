#include<iostream>
#include<cmath>
using namespace std;

bool sorted_or_not(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]>arr[i+1])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int t;
   cin>>t;

   while(t--)
   {
        int n,m=1e9;
        cin>>n;

        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        if(!sorted_or_not(arr,n))
        {
            cout<<"0\n";
        }
        else
        {
            for(int i=0; i<n-1; i++)
            {
                m = min(m, arr[i+1] - arr[i] + 1);
            }
            cout<<(m+1)/2<<endl;
        }
   }
  
  return 0;
}