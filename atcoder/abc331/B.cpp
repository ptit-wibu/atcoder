#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int n,a,b,c; cin>>n>>a>>b>>c;
  long long res = 1e9;
  for(int i = 0; i<=n;i++)
  {
    for(int j = 0; j<=n;j++)
    {
      for(int k = 0; k<=n;k++)
      {
        if(i*6 + j*8 + k*12 < n) continue;
        long long tmp = i*a+j*b+k*c;
        res = min(res, tmp);
      }
    }
  }
  cout<<res;
}

