/*
OOP Assignment-2

Que. Develop a program in C++ to create a database of student’s information system containing the following information: Name, Roll number, Class, Division, Date of Birth, Blood group, Contact address, Telephone number, Driving license no. and other. Construct the database with suitable member functions. Make use of constructor, default constructor, copy constructor, destructor, static member functions, friend class, this pointer, inline code and dynamic memory allocation operators-new and delete as well as exception handling.
*/

#include<iostream>
#include<string.h>
using namespace std;

class student
{
	public:
	//int srno;
	char name[30];
	int rollno;
	char cls[5];
	char div[5];
	char dob[15];
	char bldgrp[7];
	char add[50];
	long long int mobno;
	char dlno[25];
	static int count;
	void get_data();
	friend void display_data(student &obj);

	student()      //constructor
	{
		rollno=0;
		cout<<"\tConstructor";
		rollno=count;
		count++;
	}

	~student()  //destructor
	{
		cout<<"\nDestructor"<<endl;
		cout<<"Destroying the object"<<endl;
		//count--;
	}

	static void getcount()  //static member function
	{
		cout<<"\nCount: "<<count;
	}

	student (int rollno) //this pointer
	{
		this-> rollno=rollno;
	}

	student (student &obj) //copy constructor
	{
		strcpy(name,obj.name);
		rollno=obj.rollno;
		strcpy(cls,obj.cls);
		strcpy(div,obj.div);
		strcpy(dob,obj.dob);
		strcpy(bldgrp,obj.bldgrp);
		strcpy(add,obj.add);
		mobno=obj.mobno;
		strcpy(dlno,obj.dlno);
		//srno=count;
		count++;
	}
};	//end of class

int student::count=0;

void student::get_data()
{
	cout<<"\n\tEnter Roll No: ";
	cin>>rollno;
    cout<<"\n\tEnter Student Name: ";
	cin.ignore();
	cin.getline(name,30);
	cout<<"\n\tEnter Class: ";
	cin>>cls;
	cout<<"\n\tEnter Division: ";
	cin>>div;
	cout<<"\n\tEnter Date of Birth: ";
	cin>>dob;
	cout<<"\n\tEnter Blood Group: ";
	cin>>bldgrp;
	cout<<"\n\tEnter Address: ";
	cin.ignore();
	cin.getline(add,50);
	cout<<"\n\tEnter Mobile No: ";
	cin>>mobno;
	cout<<"\n\tEnter Driving License No: ";
	cin>>dlno;
}

void display_data(student &obj)
{
	cout<<"\nAll the details are given below:";
	cout<<"\nRoll No.\tName\t\tClass\tDiv\tDOB\tBlood Group\tAddress\t\tMobile No.\tDL No.\n";

    cout<<"\n"<<obj.rollno;
	cout<<"\t\t"<<obj.name;
	cout<<"\t"<<obj.cls;
	cout<<"\t"<<obj.div;
	cout<<"\t"<<obj.dob;
	cout<<"\t"<<obj.bldgrp;
	cout<<"\t"<<obj.add;
	cout<<"\t"<<obj.mobno;
	cout<<"\t"<<obj.dlno;
	cout<<"\n";
}

int main()
{
	student s1;
	student s2(s1);   //copy constructor called

	cout<<"\nEnter data for Student:"<<"\n";
	s1.get_data();
	//s2.get_data();
	
	display_data(s1);	//friend functon called
	//display_data(s2);	//friend functon called
	
	student *s[20];  //array of objects i.e students
	int i,n;
	cout<<"\n\nHow many student objects you want to create ?? ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		s[i]=new student();
	}
	
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter Data of Student "<<i+1<<endl;
		s[i]->get_data();
	}
	
	for(i=0;i<n;i++)
	{
		display_data(*s[i]);
	}
	
	for(i=0;i<n;i++)
	{
		delete (s[i]);
	}
	
	s1.getcount();
	return 0;
}

/*
Output
        Constructor
Enter data for Student:

        Enter Roll No: 1

        Enter Student Name: Purva Phadol

        Enter Class: SE

        Enter Division: B

        Enter Date of Birth: 30/10/2003

        Enter Blood Group: A+ve

        Enter Address: Nashik 422003

        Enter Mobile No: 9090789718

        Enter Driving License No: MH679497393

All the details are given below:
Roll No.        Name            Class   Div     DOB     Blood Group     Address         Mobile No.      DL No.

1               Purva Phadol    SE      B       30/10/2003      A+ve    Nashik 422003   9090789718      MH679497393

How many student objects you want to create ?? 2
         Constructor     Constructor
Enter Data of Student 1

        Enter Roll No: 2

        Enter Student Name: Vedant Patil

        Enter Class: SE

        Enter Division: B

        Enter Date of Birth: 07/04/2003

        Enter Blood Group: B+ve

        Enter Address: Ravet Jalgoan

        Enter Mobile No: 9879879876

        Enter Driving License No: MH98456734

Enter Data of Student 2

        Enter Roll No: 3

        Enter Student Name: Priyanka Patil

        Enter Class: SE

        Enter Division: B

        Enter Date of Birth: 16/07/2003

        Enter Blood Group: A-ve

        Enter Address: Khutwad Nagar

        Enter Mobile No: 9876598765

        Enter Driving License No: MH5464837364

All the details are given below:
Roll No.        Name            Class   Div     DOB     Blood Group     Address         Mobile No.      DL No.

2               Vedant Patil    SE      B       07/04/2003      B+ve    Ravet Jalgoan   9879879876      MH98456734

All the details are given below:
Roll No.        Name            Class   Div     DOB     Blood Group     Address         Mobile No.      DL No.

3               Priyanka Patil  SE      B       16/07/2003      A-ve    Khutwad Nagar   9876598765      MH5464837364

Destructor
Destroying the object

Destructor
Destroying the object

Count: 4

Destructor
Destroying the object

Destructor
Destroying the object

*/
