#include<iostream>
using namespace std;

int main()
{
   int t;
   cin>>t;

   while(t--)
   {
        int n;
        cin>>n;

        int arr[n][2];
        int count=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<2; j++)
            {
                cin>>arr[i][j];
            }
            if(arr[i][0]>arr[i][1])
            {
                count++;
            }
        }

        cout<<count<<endl;
    }
  
  return 0;
}