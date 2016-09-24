#include<iostream>
#include<cstring>
using namespace std;

	const char* yo(const char* str){
 return str;
}

const char* y(char* str1,char* str2){
  strcpy(str1,str2);

  return str1;
}

main(){
cout<<"************************Str Compare***************************\n";
char str1[100], str2[100], str[100], str3[100];
const char* s=" ";
int i, result, l, q, flag;
cout<<"Enter 1st word: ";
cin>>str1;
cout<<"Enter 2nd word: ";
cin>>str2;
cout<str1;
switch(strcmp(str1, str2)){
case -1:
cout<< "Negative\n\n";
break;
case 0:
cout<< "Equal\n\n";
break;
case 1:
cout<< "Positive\n\n";
break;
}
cout<<"************************Str Copy***************************\n";
	cin.ignore();
  cout<<"Enter first word: ";
  cin>>str1;
  cout<<"Enter second word: ";
  cin>>str2;
  cout<<y(str1, str2)<<endl<<endl;
cout<<"************************Str Concatenation***************************\n";
cin.ignore();
cout<<"Enter 1st string: ";
gets(str1);
strcat(str1,s);
cout<<"Enter 2nd string: ";
gets(str2);
strcat(str1,str2);
cout<<str1<<"\n\n";

//insert s4
cout<<"************************Palindrome***************************\n";
cin.ignore();
	cout<<"Enter a word: ";
	cin>>str;
	strlwr(str);
	l=strlen(str);
	for(int i=0;i<l;i++) {
		if(str[i]!=str[l-(i+1)]) flag=1;
    }
    if (flag==1) cout<<"PALINDROME\n\n";
    else if (flag==0) cout<<"Not a PALINDROME\n\n";

//s5
cout<<"************************Capitalization***************************\n";
cin.ignore();
	cout<<"Enter string: ";
  gets(str3);
  strlwr(str3);
  str3[0]-=32;
  for(i=1;i<strlen(str3);i++){
  	if(str3[i]==' ')
  	str3[i+1]-=32;
  
  }
  puts(str3);
  cout<<endl<<endl;

cout<<"************************Reverse String***************************\n";
cin.ignore();
cout<<"Enter string: ";
	gets(str);
	l=strlen(str);
	for(int i=l;i>=0;i--) {
		if (str[i]==32) {
			int q=i+1;
			while(str[q]!=32&&q<l) {
				cout<<str[q];
				q++;
			}
			cout<<endl;
		}
	}
	int k=0;
	while(str[k]!=32) {
		cout<<str[k];
		k++;
	}


}
