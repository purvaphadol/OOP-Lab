/*
OOP Assignment-5

Que. Write a function template for selection sort that inputs, sorts and outputs an integer array and a float array.
*/

#include<iostream>
#include<string.h>
using namespace std;

template <class T>

class array
{
	T A[20];
	int i,n;
	public:
		void read_array();
		void display_array();
		void selection_sort();
};

template <class T>
void array<T>::read_array()
{
	cout<<"Enter the Number of Elements in Array: ";
	cin>>n;
	cout<<"\nEnter the Elements of an Array:"<<endl;
	for (i=1;i<=n;i++)
	{
		cin>>A[i];
	}
}

template <class T>
void array<T>::display_array()
{
	for (i=1;i<=n;i++)
	{
		cout<<"\t"<<A[i];
	}
	cout<<"\n";
}

template <class T>
void array<T>::selection_sort()
{
	int j,min;
	T temp;
	for (i=1;i<=n;i++)
	{
		min=i;
		for (j=i+1;j<=n;j++)
		{
			if (A[j]<A[min])
			{
				min=j;
			}
		}
		temp=A[i];
		A[i]=A[min];
		A[min]=temp;
	}
	display_array();
}


int main()
{
	int p,i,ch;
	
	array <int> a1;
	array <float> b1;
	array <char> c1;
	array <string> d1;
	
	do
	{
		cout<<"\n******** Main Menu ******** \n\t1.INTEGER ARRAY \n\t2.FLOAT ARRAY \n\t3.CHARACTER ARRAY \n\t4.STRING ARRAY \n\t5.Exit"<<endl;
		cout<<"\nEnter Your Choice: ";
		cin>>ch;
		
		switch (ch)
		{
			case 1:
			{
				cout<<"\n*** INTEGER ARRAY ***"<<endl;
				a1.read_array();
				cout<<"\nGiven Array is"<<endl;
				a1.display_array();
				cout<<"\nSorted Array is"<<endl;
				a1.selection_sort();
				break;
			}
			
			case 2:
			{
				cout<<"\n*** FLOAT ARRAY ***"<<endl;
				b1.read_array();
				cout<<"\nGiven Array is"<<endl;
				b1.display_array();
				cout<<"\nSorted Array is"<<endl;
				b1.selection_sort();
				break;
			}
			
			case 3:
			{
				cout<<"\n*** CHARACTER ARRAY ***"<<endl;
				c1.read_array();
				cout<<"\nGiven Array is"<<endl;
				c1.display_array();
				cout<<"\nSorted Array is"<<endl;
				c1.selection_sort();
				break;	
			}
			
			case 4:
			{
				cout<<"\n*** STRING ARRAY ***"<<endl;
				d1.read_array();
				cout<<"\nGiven Array is"<<endl;
				d1.display_array();
				cout<<"\nSorted Array is"<<endl;
				d1.selection_sort();
				break;	
			}

			case 5:
			{
				cout<<"\nExit"<<endl;
				break;
			}

			default:
			{
				cout<<"\nInvalid Choice"<<endl;
			}
		}
	}
	while (ch!=5);	
	return 0;
}

/*
Output

******** Main Menu ******** 
	1.INTEGER ARRAY 
	2.FLOAT ARRAY 
	3.CHARACTER ARRAY 
	4.STRING ARRAY

Enter Your Choice: 1

*** INTEGER ARRAY ***
Enter the Number of Elements in Array: 5

Enter the Elements of an Array:
67
48
93
27
53

Given Array is
	67	48	93	27	53

Sorted Array is
	27	48	53	67	93

Do You want to Continue ??  (Y/N)  y

******** Main Menu ******** 
	1.INTEGER ARRAY 
	2.FLOAT ARRAY 
	3.CHARACTER ARRAY 
	4.STRING ARRAY

Enter Your Choice: 2

*** FLOAT ARRAY ***
Enter the Number of Elements in Array: 5

Enter the Elements of an Array:
25.3
40.8
10.4
84.6
30.2

Given Array is
	25.3	40.8	10.4	84.6	30.2

Sorted Array is
	10.4	25.3	30.2	40.8	84.6

Do You want to Continue ??  (Y/N)  y

******** Main Menu ******** 
	1.INTEGER ARRAY 
	2.FLOAT ARRAY 
	3.CHARACTER ARRAY 
	4.STRING ARRAY

Enter Your Choice: 3

*** CHARACTER ARRAY ***
Enter the Number of Elements in Array: 5

Enter the Elements of an Array:
n
f
t
v
p

Given Array is
	n	f	t	v	p

Sorted Array is
	f	n	p	t	v

Do You want to Continue ??  (Y/N)  y

******** Main Menu ******** 
	1.INTEGER ARRAY 
	2.FLOAT ARRAY 
	3.CHARACTER ARRAY 
	4.STRING ARRAY

Enter Your Choice: 4

*** STRING ARRAY ***
Enter the Number of Elements in Array: 5

Enter the Elements of an Array:
hello
welcome
hii
thanks
bye

Given Array is
	hello	welcome	hii	thanks	bye

Sorted Array is
	bye	hello	hii	thanks	welcome

Do You want to Continue ??  (Y/N)  n

*/



