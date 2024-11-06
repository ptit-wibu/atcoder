#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<vector>
#include<map>
typedef long long ll;
using namespace std;
bool cmp(pair<ll,ll> a, pair<ll,ll> b)
{
	return a.first > b.first;
}	
int main()
{
	ll n,w,sum=0;
	cin >> n >> w;
	vector<pair < long long, long long> > vt(n);
	for(int i=0;i<n;i++)
	{
		ll a,b; cin>>a>>b;
		vt.push_back(make_pair(a,b));
	}
	auto it = vt.begin();
	auto end = vt.end();
	sort(it,end,cmp);
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
