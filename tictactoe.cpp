#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
#define ll long long
const ll modulo = 1000000007;
void fastIO()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
void solve()
{
   char a[3][3]; 
   int cx=0, co=0,cu=0,x=0,o=0;
	    for(int i=0; i<3; i++)
	    {
	        for(int j=0; j<3;j++)
	        {
	            cin>>a[i][j];
	            if(a[i][j]=='X')
	            cx++;
	            else if (a[i][j]=='O')
	            co++;
	            else
	            cu++;
	    }
	    }
	  for(int i=0; i<3; i++)
	  {
	      if(a[i][0]==a[i][1] and a[i][2]==a[i][1])
	      {
	          if (a[i][0]=='X')
	          x++;
	          if (a[i][0]=='O')
	          o++;
	      }
	}
	for(int i=0; i<3; i++){
	      if(a[0][i]==a[1][i] and a[2][i]==a[1][i])
	      {
	          if (a[0][i]=='X')
	          x++;
	          if (a[0][i]=='O')
	          o++;
	      }
	}
	if((a[0][0]==a[1][1] && a[2][2]==a[1][1]) || (a[0][2]==a[1][1] && a[2][0]==a[1][1]))
	      {
	          if (a[1][1]=='X')
	          x++;
	          if (a[1][1]=='O')
	          o++;
	      }
	if(co>cx || cx-co>1)
	cout << 3 << "\n";
	else if ((cx>co) && x==1 && o==0 || ((cx==co) && o==1 && x==0))
	cout << 1 << "\n";
	else if (cu==0 && x==0 && o==0)
	cout<<1<<"\n";
	else if (cu==0 && x==2)
	cout << 1 << "\n";
	else if (cu>0 && x==0 && o==0)
	cout << 2 << "\n";
	else
	cout << 3 << "\n";
}
int main() 
{
    fastIO();
	ll t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
	return 0;
}