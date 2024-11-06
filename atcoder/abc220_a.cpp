#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	for(int i=1;;i++)
	{
		int tmp = c*i;
		if(tmp >= a && tmp <= b ) 
		{
			cout << tmp;
			break;
		 } 
		 if(tmp> b) { 
		 cout << -1;
		 break;
		 }
	}
}
