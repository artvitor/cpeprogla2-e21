#include<iostream>
#include<iomanip>
using namespace std;

int choices;
char ans;

int choice(int choices);
char again(char ans);

void problem1();
void problem2();
void problem3();
void newLine();


struct studrecs{
	char name[100];
	int a,x,y,z,sum;
};
	
	struct stdntrcrd{
int a2,x2,y2,z2,ave2;
char n[100];	
};
int i, j, tp;
struct Cust{
		struct Name{
		char fname[20];
		char lname[20];
		}name;
	struct Order{
		int day;
		int month;
		int year;
		int quantity;
		    struct Item{
				int id;
				char iname[20];
				int price;
		};		
	Item item[3];
	}order;	
};

void problem1(){
	stdntrcrd sr;
	cout << "STUDENT RECORD \n";
	cout << "Enter ID: ";
	cin >> sr.a2;
	cin.ignore();
	cout << "Name: ";
	cin.getline(sr.n,100);
	cout << "Quiz # 1: ";
	cin >> sr.x2;
	cout << "Quiz # 2: ";
	cin >> sr.y2;
	cout << "Quiz # 3: ";
	cin >> sr.z2;
	cout << "\n";
	sr.ave2=(sr.x2 + sr.y2 + sr.z2)/3;
	cout << "\n\n";
	cout << "Student Record " << endl;
	cout << "ID:" <<sr.a2 << endl;
	cout << "Name:" << sr.n << endl;
	cout << "Grades:" <<  sr.ave2 << endl;
	if (sr.ave2<70)
	{
		cout << "Remarks: Failed" << endl;
	}
	else
		cout << "Remarks: Passed" << endl;
}

void problem2(){
	studrecs s[5];
	int b;
	float ave;
	cout<<"Enter 5 Student's Record\n\n";
	for(b=0;b<5;b++){
		cout<<"STUDENT "<<b+1<<endl;
		cout<<"ID: ";
		cin>>s[b].a;
		cin.ignore();
		cout<<"Name: ";
		cin.getline(s[b].name,100);
		cout<<"Enter three quizzes: \n";
		cin>>s[b].x>>s[b].y>>s[b].z;
		cout<<endl;
		s[b].sum=s[b].x+s[b].y+s[b].z;
		cin.ignore();
	}
	cout<<"No.\t"<<"Student ID\t\t"<<"Name\t"<<"Grade\t"<<"Remarks\t\n";
	for(b=0;b<5;b++){
		cout<<b+1<<"\t"<<s[b].a<<"\t\t\t"<<s[b].name<<"\t"<<s[b].sum/3<<"\t";
		if((s[b].sum/3)>74)
		cout<<"PASSED\n";
		else
		cout<<"FAILED\n";
	}
}

void problem3(){
	Cust cust[3];
	
	for (int i=0;i<3;i++){
	cout << "CUSTOMER INFORMATION "<< i+1 <<endl;
		cin.ignore();
		cout << "First Name: ";
		cin.getline(cust[i].name.fname,50);
		cout << "Last Name: ";
		cin.getline(cust[i].name.lname,50);
		
		
		cout << "ORDER DATE: " << endl;
		cout << "Day: ";
		cin >> cust[i].order.day;
		cout << "Month: ";
		cin >> cust[i].order.month;
		cout << "Year: ";
		cin >> cust[i].order.year;
		cout << "\nENTER 3 ITEMS: "<<endl;
		
		
		for (int j=0;j<3;j++){
		    cout << "ID: ";
		    cin >> cust[i].order.item[j].id;
		    newLine();
    	    cout<<"Name: ";
    		cin.getline(cust[i].order.item[j].iname,29);
    		cout << "Price: ";
    		cin >>cust[i].order.item[j].price;
    		cout <<"Quantity: ";
    		cin >>cust[i].order.quantity;
    		cout <<endl;
		}
		newLine();
}
	j=0;
	
	
	
	cout << "********** SUMMARY REPORT **********"<<endl;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout <<" #"<<setw(10)<<"Customer Name"
		<<setw(10)<<"Order Date"
		<<setw(10)<<"Items"
		<<setw(10)<<"Price"
		<<setw(10)<<"Quantity"<<endl;
	
	for (i=0;i<3;i++){
	
		tp=0;
		
		cout <<" "<< i+1
			<< setw(10)<<cust[i].name.lname<<","
			<< setw(2)<<cust[i].name.fname
			<< setw(10) <<cust[i].order.day 	
					<<"/"<<cust[i].order.month
					<<"/"<<cust[i].order.year << endl;
		
    	for (j=0;j<3;j++){
    		
    		cout<<setw(40)<<cust[i].order.item[j].iname
				<<setw(2)<<cust[i].order.item[j].price
				<<setw(5)<<cust[i].order.quantity<<endl;
			
    		tp += cust[i].order.item[j].price;
		}
		tp = tp * cust[i].order.quantity;
		cout << setw(40) << "TOTAL PRICE: "<< tp << endl;
	}
}
void newLine(){
     char s;
     do{cin.get(s);}while(s!='\n');     
}
int choice(int choices) {

	cout << "Choose a problem # to solve [1-3]: " ;
	cin >> choices;
	switch(choices) {
		case 1:
			problem1();
			again(ans);
			break;
		case 2:
			problem2();
			again(ans);
			break;
		case 3:
			problem3();
			again(ans);
			break;
		default:
			break;
	}
	return choices;
}
char again(char ans) {
	cout<<"\n\nYou want to solve another problem? [y/n] ";
	cin >> ans;
	if (ans == 'y') {
		system("cls");
		choice(choices);
	}
	else
		cout<<"Program Terminated \n";
	
	return ans;
}

main() {
	choice(choices);
}


