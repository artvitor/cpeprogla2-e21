//if 10, then 23
//if 1000, then 233168
#include<iostream>
#include<fstream>
using namespace std;
main(){
	ifstream m("input.txt");
	int y,x,a=0;
	while(m>>y){
		for(x=1;x<y;x++){
			if(((x%5)==0)||((x%3)==0)){\
				a=a+x;
			}
		}
		cout<<a;	
	}
}
