#include<iostream>
#include<fstream>
using namespace std;
main(){
	ifstream m("input.txt");
	int x;
	m>>x;
	cout<<x<<"\t";
	while(x>1){
			if((x%2)==1){
				x=(x*3)+1;
				cout<<x<<"\t";
			}
			if((x%2)==0){
				x=x/2;
				cout<<x<<"\t";
			}
		}
	}
