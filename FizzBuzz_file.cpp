#include<iostream>
#include<fstream>
using namespace std;
main(){
	ifstream f("input.txt");
	int x;
	while(f>>x){
		if((x%3==0)&&(x%5==0)){
			cout<<"FizzBuzz\n";
		}
		else if(x%5==0){
			cout<<"Buzz\n";
		}
		else if(x%3==0){
			cout<<"Fizz\n";
		}
		else{
			cout<<x<<endl;
		}
	}
}
