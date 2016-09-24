//if num is divisible by three, print Fizz.
//if num is divisible by five, print Buzz.
//if num is divisible by 3 and 5, print FizzBuzz
#include<iostream>
using namespace std;
main()
{
	int i;
	cout<<"FizzBuzz";
	cout<<"\n\nPrint number from 1 - 100\n\n";
	for (i=1;i<=100;i++)
	{
		if(i%15==0)
		{
			cout<<"FizzBuzz\n";
		}
		else if(i%3==0)
		{
			cout<<"Fizz\n";
		}
		else if(i%5==0)
		{
			cout<<"Buzz\n";	
		}
		else
		{
			cout<<i<<endl;
		}
		
		
	}
	
}
