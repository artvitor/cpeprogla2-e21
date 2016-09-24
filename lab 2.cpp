#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;
main(){
	double num1, prblm1(double num1);
    int x, fctrl(int x), prblm2();
	//Problem 1
	cout<<"Enter a number to round off: ";
	cin>>num1;
	cout<<round(num1)<<"\n\n";
	
	//problem 2
	prblm2();
	
	//Problem 3
	fctrl(x);
}
double prblm1(double num1){
	return round(num1);
}

void prblm2(){
	int uniques[10], num;
	srand((unsigned)time(NULL)); 
	for(int i=0;i<10;i++){
		num=(rand()%21);
		for(int j=0;j<10;j++){
			if(num==uniques[j]){
					num=(rand()%21);
			}
			else{
				uniques[i] = num;
			}
		}
	}
	for(int i=0;i<10;i++){
		cout << uniques[i]<<" ";
	}
}

void fctrl(int x){
	int result=1;
	cout<<"\n\nGet the factorial of the number: ";
	cin>>x;
	for(int i=1;i<x+1;i++) {
		if(x==0) cout<<" Result: 1\n";
		else result=result*i;
	}
	cout<<"Result: "<<result<<endl;
	}
