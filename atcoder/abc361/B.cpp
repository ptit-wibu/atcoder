#include<bits/stdc++.h>
#define int long long
using namespace std;

bool check_x(int x1, int x2 , int x3, int x4)
{
	return ((x1-x3)*(x1-x4) < 0 || (x2-x3)*(x2-x4) < 0 || (x3 - x1)*(x3-x2) < 0 || (x4 - x1)*(x4-x2) < 0);
}

bool check_y(int y1, int y2 , int y3, int y4)
{
	return ((y1-y3)*(y1-y4) < 0 || (y2-y3)*(y2-y4) < 0 || (y3 - y1)*(y3-y2) < 0 || (y4 - y1)*(y4-y2) < 0);
}

bool check_z(int z1, int z2 , int z3, int z4)
{
	return ((z1-z3)*(z1-z4) < 0 || (z2-z3)*(z2-z4) < 0 || (z3 - z1)*(z3-z2) < 0 || (z4 - z1)*(z4-z2) < 0);
}

int32_t main()
{
	int x1,y1,z1;
	cin>>x1>>y1>>z1;
	int x2,y2,z2;
	cin>>x2>>y2>>z2;
	int x3,y3,z3;
	cin>>x3>>y3>>z3;
	int x4,y4,z4;
	cin>>x4>>y4>>z4;
	if(check_x(x1,x2,x3,x4) && check_y(y1,y2,y3,y4) && check_z(z1,z2,z3,z4)) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}
