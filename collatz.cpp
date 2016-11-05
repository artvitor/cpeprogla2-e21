#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;

int x, y, high=1, great=1, a, con, man;
main(){
	ifstream m("H:\\My Documents\\input.txt");
	while(m>>x>>y){
	con=y;
	for(a=x;a<y;a++){
			man=a;
			high=1;
			while(man>1){
				if ((man%2)==0) {
					man=(man/2);
					high++;
				}
				else if ((man%2)!=0) {
					man=((3*man)+1);
					high++;
				}
			if (high>great) great=high;
			}
		}
		cout<<x<<" "<<y<<" "<<great<<endl;
	}
	return 0;	
}
