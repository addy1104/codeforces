#include <iostream>
using namespace std;
 
int main()
{
	int tt;
	cin >> tt;
	while (tt--)
	{
		vector <string> a(3);
		for (int i=0; i<3; i++)
			cin >> a[i];
 
		string ans = "DRAW";
		for (int i=0; i<3; i++)
			if (a[i][1]==a[i][0] && a[i][1]==a[i][2] && a[i][1]!='.')
				ans = a[i][1];
		for (int i=0; i<3; i++)
			if (a[1][i]==a[0][i] && a[1][i]==a[2][i] && a[1][i]!='.')
				ans = a[1][i];
		
		if (a[1][1]==a[0][0] && a[1][1]==a[2][2] && a[1][1]!='.')
			ans = a[1][1];
 
		if (a[1][1]==a[0][2] && a[1][1]==a[2][0] && a[1][1]!='.')
			ans = a[1][1];
 
		cout << ans << endl;
	}
 
	return 0;
}