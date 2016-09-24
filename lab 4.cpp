#include<iostream>
#include<cstring>
using namespace std;

	void CPY();
	void CMP();
	void CAT();	
	int LEN(char*), chs(int chooser);
	char ag(char yesno),REV(char*str),yesno,str1[50], str2[50], str[50], *s1, *s2;
	int flag=0, len=0, x=0, chooser;			

main() {
	
	chs(chooser);
}
int chs(int chooser) {
	cout<<"Choose a problem # to solve [1-5]...\n[1] String Copy\n[2] String Compare\n[3] String Concatenation\n[4] String Length\n[5] String Reversing... ";
	cin>>chooser;
	switch(chooser) {
		case 1:
			CPY();
			ag(yesno);
			break;
		case 2:
			CMP();
			ag(yesno);
			break;
		case 3:
			CAT();
			ag(yesno);
			break;
		case 4:
			LEN(str1);
			ag(yesno);
			break;
		case 5:
			REV(str1);
			ag(yesno);
			break;
		default:
			break;
	}
	return chooser;
}
void CPY() {
	cout<<"\nEnter first string:  ";
	cin.ignore();
    gets(str1);
    cout<<"Enter second string: ";
    gets(str2);
	for(int i=0;i<50;i++){
    	s1=&str1[i];
    	s2=&str2[i];
    	*s1=*s2;
    	cout<<str1[i];
	}  
}

void CMP() {
	cout<<"\nEnter first string:  ";
	cin.ignore();
    gets(str1);
    cout<<"Enter second string: ";
    gets(str2);
	for(int i=0;i<50;i++){
    	s1=&str1[i];
    	s2=&str2[i];
    	(int) str1[i];
    	(int) str2[i];
    	if (*s1==*s2) flag+=0;
		else if (*s2<*s1) flag+=1;
		else if (*s2>*s1) flag-=1;
	}
	if (flag==0) cout<<"Equal";
	else if (flag>0) cout<<"Positive";
	else if (flag<0) cout<<"Negative";
}

void CAT() {
	cout<<"\nEnter first string:  ";
	cin.ignore();
    gets(str1);
    cout<<"Enter second string: ";
    gets(str2);
	for(int i=0;i<strlen(str1);i++){
    	s1=&str1[i];
    	cout<<*s1;
	}
	for(int i=0;i<strlen(str2);i++){
    	s2=&str2[i];
    	cout<<*s2;
	}
}

int LEN(char*s1){
	cout<<"\nEnter a string:  ";
	cin.ignore();
    gets(str1);
	while(*s1!='\0') {
		x++;
		s1++;
	}
	cout<<"The length of the string is: "<<x;
	return x;
}

char REV(char*str) {
	cout<<"\nEnter a string: ";
	cin.ignore();
    gets(str);
    cout<<"The reverse is: ";
	len=strlen(str);
	for(int i=len-1;i>=0;i--) {
		cout<<str[i];
	}
}



char ag(char yesno) {
	cout<<"\nDo you want to try again [y/n] ";
	cin>>yesno;
	if (yesno=='y') {
		system("cls");
		chs(chooser);
	}
	else if (yesno=='n') {
		cout<<"Thanks\n";
	}
	else {
		ag(yesno);
	}
	return yesno;
}


