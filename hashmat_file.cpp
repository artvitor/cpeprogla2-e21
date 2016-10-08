#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
main(){
	ifstream f("input.txt");	
	int hash, opp;
	while(f>>hash>>opp){
		cout<<abs(hash-opp)<<endl;
	}
}
