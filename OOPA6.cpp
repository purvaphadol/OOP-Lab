/*
OOP Assignment-6

Que. Write C++ program using STL for sorting and searching user defined records such as Item records (Item code, name, cost, quantity etc) using vector container.
*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class item
{
	public:
		char name[20];
		int qty,cost,code;
		
		bool operator==(const item &i1)
		{
			if (code==i1.code)
				return 1;
			else
				return 0;
		}
		
		bool operator<(item &i1)
		{
			if (code<i1.code)
				return 1;
			else
				return 0;
		}
};

vector<item>v1;
void print(item &i1);
void display_rec();
void search_rec();
void insert_rec();
void delete_rec();

bool compare(const item &i1, const item &i2)
{
	return i1.cost<i2.cost;
}

int main()
{
	int ch;
	do
	{
		cout<<"\n******** MAIN MENU ********"<<endl;
		cout<<"\n\t1.INSERT RECORD \n\t2.DISPLAY RECORD \n\t3.SEARCH RECORD \n\t4.SORT RECORD \n\t5.DELETE RECORD \n\t6.EXIT"<<endl;
		cout<<"\nEnter Your Choice: ";
		cin>>ch;
		
		switch (ch)
		{
			case 1:
				insert_rec();
				break;
				
			case 2:
				display_rec();
				break;
			
			case 3:
				search_rec();
				break;
			
			case 4:
				sort(v1.begin(),v1.end(),compare);
				cout<<"Sorted Items on Cost are: "<<endl;
				display_rec();
				break;
				
			case 5:
				delete_rec();
				display_rec();
				break;
			
			case 6:
				exit(0);
		}
	}
	while (ch!=7);
	return 0;
}

void insert_rec()
{
	item i1;
	cout<<"\nEnter the Name: ";
	cin>>i1.name;
	cout<<"Enter the Quantity: ";
	cin>>i1.qty;
	cout<<"Enter the Cost: ";
	cin>>i1.cost;
	cout<<"Enter the Code: ";
	cin>>i1.code;
	v1.push_back(i1);
}

void display_rec()
{
	for_each(v1.begin(),v1.end(),print);
}

void print(item &i1)
{
	cout<<"\n\tItem Name: "<<i1.name;
	cout<<"\n\tItem Quantity: "<<i1.qty;
	cout<<"\n\tItem Cost: "<<i1.cost;
	cout<<"\n\tItem Code: "<<i1.code;
	cout<<"\n";
}

void search_rec()
{
	vector<item>::iterator a;
	item i1;
	cout<<"Enter Item Code to be Search: ";
	cin>>i1.code;
	a=find(v1.begin(),v1.end(),i1);
	if (a!=v1.end())
	{
		cout<<"Item Found"<<endl;
	}
	else
	{
		cout<<"Item Not Found"<<endl;
	}
}

void delete_rec()
{
	vector<item>::iterator a;
	item i1;
	cout<<"Enter Item Code to be Deleted: ";
	cin>>i1.code;
	a=find(v1.begin(),v1.end(),i1);
	if (a!=v1.end())
	{
		v1.erase(a);
		cout<<"Item Deleted"<<endl;
	}
	else
	{
		cout<<"Item Not Found"<<endl;
	}
}


/*
Output


******** MAIN MENU ********

        1.INSERT RECORD 
        2.DISPLAY RECORD 
        3.SEARCH RECORD 
        4.SORT RECORD 
        5.DELETE RECORD 
        6.EXIT

Enter Your Choice: 1

Enter the Name: Pen 
Enter the Quantity: 4
Enter the Cost: 80
Enter the Code: 01

******** MAIN MENU ********

        1.INSERT RECORD 
        2.DISPLAY RECORD 
        3.SEARCH RECORD 
        4.SORT RECORD 
        5.DELETE RECORD
        6.EXIT

Enter Your Choice: 1

Enter the Name: Pencil
Enter the Quantity: 2
Enter the Cost: 20
Enter the Code: 02

******** MAIN MENU ********

        1.INSERT RECORD
        2.DISPLAY RECORD
        3.SEARCH RECORD
        4.SORT RECORD
        5.DELETE RECORD
        6.EXIT

Enter Your Choice: 2

        Item Name: Pen
        Item Quantity: 4
        Item Cost: 80
        Item Code: 1

        Item Name: Pencil
        Item Quantity: 2
        Item Cost: 20
        Item Code: 2

******** MAIN MENU ********

        1.INSERT RECORD
        2.DISPLAY RECORD
        3.SEARCH RECORD
        4.SORT RECORD
        5.DELETE RECORD
        6.EXIT

Enter Your Choice: 3
Enter Item Code to be Search: 2
Item Found

******** MAIN MENU ********

        1.INSERT RECORD
        2.DISPLAY RECORD
        3.SEARCH RECORD
        4.SORT RECORD
        5.DELETE RECORD
        6.EXIT

Enter Your Choice: 4
Sorted Items on Cost are:

        Item Name: Pencil
        Item Quantity: 2
        Item Cost: 20
        Item Code: 2

        Item Name: Pen
        Item Quantity: 4
        Item Cost: 80
        Item Code: 1

******** MAIN MENU ********

        1.INSERT RECORD
        2.DISPLAY RECORD
        3.SEARCH RECORD
        4.SORT RECORD
        5.DELETE RECORD
        6.EXIT

Enter Your Choice: 5
Enter Item Code to be Deleted: 1
Item Deleted

        Item Name: Pencil
        Item Quantity: 2
        Item Cost: 20
        Item Code: 2

******** MAIN MENU ********

        1.INSERT RECORD
        2.DISPLAY RECORD
        3.SEARCH RECORD
        4.SORT RECORD
        5.DELETE RECORD
        6.EXIT

Enter Your Choice: 6

*/







