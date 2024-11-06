#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;  cin>>n;
	long long a[n];
	long long b[n];
	long long c[n];
	long long sum = 0;
	for(int i = 0;i<n;i++)
	{
		cin>>a[i];
		b[i] = a[i];
		sum+=a[i];
	}
	sort(b,b+n);
	c[0] = b[0];
	for(int i = 1;i<n;i++)
	{
		c[i] = b[i] + c[i-1];
		//cout<<c[i]<<" ";
	}
	for(int i = 0;i<n;i++)
	{
	long long tmp = upper_bound(b,b+n,a[i]) - b;
		//cout<<c[tmp]<<" ";
		if(tmp == n) cout<<"0"<<" ";
		else cout<<sum - c[tmp-1]<<" ";
		//cout<<a[i] - c[tmp]<<" ";
	}
}
