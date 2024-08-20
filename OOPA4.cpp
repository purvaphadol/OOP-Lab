/*
OOP Assignment-4

Que. Write a C++ program that creates an output file, writes information to it, closes the file, open it again as an input file and read the information from the file.
*/

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	ofstream fout ("file.txt");
	int rollno;
	char name[30];
	string address;
	
	cout<<"\nEnter Roll No.: ";
	cin>>rollno;
	fout<<"ROLL NO: "<<rollno<<endl;
	cout<<"\nEnter Name: ";
	cin.ignore();
	cin.getline(name,30);
	fout<<"Name: "<<name<<endl;
	cout<<"\nEnter Address: ";
	cin>>address;
	fout<<"Address: "<<address<<endl;
	fout.close();
	
	ifstream fin;
	fin.open("file.txt");
	fin>>rollno;
	fin>>name;
	fin>>address;
	cout<<"\nROLL NO: "<<rollno<<"\nName: "<<name<<"\nAddress: "<<address<<endl;
	fin.close();
	
	fstream f;
	fin.open("file.txt");
	fout.open ("file.txt",ios::app);
	if (fin.is_open())
	{
		cout<<"\nEnter Roll No.: ";
		cin>>rollno;
		fout<<"ROLL NO: "<<rollno<<endl;
		cout<<"\nEnter Name: ";
		cin.ignore();
		cin.getline(name,30);
		fout<<"Name: "<<name<<endl;
		cout<<"\nEnter Address: ";
		cin>>address;
		fout<<"Address: "<<address<<endl;
		cout<<"\nAppend to file Successfully."<<endl;
		fin.close();
		fout.close();
	}
	return 0;
}

/*
OUTPUT

Enter Roll No.: 87

Enter Name: Purva

Enter Address: Nashik

ROLL NO: 87
Name: Purva
Address: Nashik
*/
















/*
	fstream f;
	fin.open("file.txt");
	fout.open ("file.txt",ios::app);
	if (fin.is_open())
	{
		cout<<"\nEnter Roll No.: ";
		cin>>rollno;
		fout<<"ROLL NO: "<<rollno<<endl;
		cout<<"\nEnter Name: ";
		cin.ignore();
		cin.getline(name,30);
		fout<<"Name: "<<name<<endl;
		cout<<"\nEnter Address: ";
		cin>>address;
		fout<<"Address: "<<address<<endl;
		cout<<"\nAppend to file Successfully."<<endl;
		fin.close();
		fout.close();
	}
*/












