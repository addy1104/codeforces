#include<iostream>
using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int t;
   cin>>t;

   while(t--)
   {
        int b,c,h;
        cin>>b>>c>>h;

        int ans = 0;
        while(b>0 && (c>0 || h>0))
        {
            --b;
            ans++;
            if(c>=0)
            {
                --c;
                ans++;
            }
            else if(h>=0)
            {
                --h;
                ans++;
            }


        }
        cout<<ans-1<<endl;
   }
  
  return 0;
}