#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#define endl "\n" 
using namespace std;
int main()
{
	long long n;
	cin >> n;
	set<long long> st;
	for(int a = 2; a<= sqrt(n); a++)
	{
		for(int b = 2;;b++)
		{
			long long tmp = pow(a,b);
			if(pow(a,b) > n) break;
			st.insert(tmp);
		}
	}
	cout << n - st.size();
}
