#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x,a,o,T[3];
	for (x=0; x<3; x++)
	{
		cin>>a>>o;
		T[x]=abs(a-o);
	}
	cout<<T[0]<<endl<<T[1]<<endl<<T[2]<< endl;
	return 0;
}

