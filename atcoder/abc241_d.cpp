#include<bits/stdc++.h>
#include<map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    unordered_map<long long, long long> mp;
    for(int i=0;i<n;i++)
    {
    	int q,x,k;
    	cin>>q>>x;
    	if(q==1)
    	{
    		mp[x]+=1;
		}
		else if(q==3)
		{
			cin>>k;
			int dem=0;
			auto y = mp.begin();
			for( y; y!= mp.end();y++)
			{
				if(y->first > x) dem++;
				if(dem == k) cout<< y->first << endl; 
				break;
			}
			if(dem < k) cout<< -1;
		}
		
	}
}
