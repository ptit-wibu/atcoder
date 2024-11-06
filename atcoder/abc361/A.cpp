#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n,k,x; cin>>n>>k>>x;
	for(int i = 1; i<=n; i++)
	{
		int tmp; cin>>tmp;
		cout<<tmp<<" ";
		if(i == k)
		{
			cout<<x<<" ";
		}
	}
}
