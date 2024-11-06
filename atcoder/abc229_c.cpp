#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<map>
typedef long long ll;
using namespace std;
int main()
{
	ll n,w,sum=0;
	cin >> n >> w;
	struct cmp
	{
		bool operator() (int a, int b)
		{
			return a>b;
		}
	};
	map <ll, ll, cmp> mp;
	for(int i=0;i<n;i++)
	{
		ll a,b; cin>>a>>b;
		mp[a] += b;
	}
	auto it = mp.begin();
	auto end = mp.end();
		while(it != end)
		{
			ll tmp = it->second;
			if(w < tmp) tmp = w;
			sum += (tmp * (it->first));
			w -= tmp;
			it++;
			if(w==0) break; 
		}
	cout<<sum;
}
