#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
main(){
	ifstream f("hashmat.txt");
	
	int hash, opp;
	while(f>>hash>>opp){
		cout<<abs(hash-opp)<<endl;
	}

}
