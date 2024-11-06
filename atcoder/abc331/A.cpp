#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int m,d,yy,mm,dd;
  cin>>m>>d>>yy>>mm>>dd;
  if(dd+1 > d)
  {
    dd = (dd+1) - d;
    if(mm+1>m)
    {
      mm = mm - m + 1;
      yy++;
      cout<<yy<<" "<<mm<< " "<<dd;
    }
    else
    {
      cout<<yy<<" "<<mm + 1<< " "<<dd;
    }
  }
  else cout<<yy<<" "<<mm<<" "<<dd+1;
}
