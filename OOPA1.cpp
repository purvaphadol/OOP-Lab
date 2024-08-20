/*
OOP Assignment-1

Que. Implement a class Complex which represents the Complex Number data type. Implement the following
1. Constructor (including a default constructor which creates the complex number 0+0i).
2. Overloaded operator+ to add two complex numbers.
3. Overloaded operator* to multiply two complex numbers.
4. Overloaded << and >> to print and read Complex Numbers.
*/

#include<iostream>
using namespace std;

class complex
{
    float real,imag;
    public:
        complex()
        {
            real=imag=0;
        }

        complex operator+(complex);
        complex operator*(complex);

        friend istream &operator >> (istream &in, complex &t)
        {
            cout<<"\tEnter Real Part: ";
            cin>>t.real;
            cout<<"\tEnter imaginary Part: ";
            cin>>t.imag;
        }
        
        friend ostream &operator << (ostream &out, complex &t)
        {
            out<<t.real<<" + i"<<t.imag<<endl;
        }
};

complex complex :: operator+(complex c)
{
    complex temp;
    temp.real=real+c.real;
    temp.imag=imag+c.imag;
    return temp;
}

complex complex :: operator*(complex c)
{
    complex temp;
    temp.real=(real*c.real)-(imag*c.imag);
    temp.imag=(imag*c.real)+(real*c.imag);
    return temp;
}

int main()
{
	complex c1,c2,c3,c4;
	cout<<"Default Constructor"<<endl;
	cout<<c1;
	cout<<"\nEnter the First Number "<<endl;
	cin>>c1;
	cout<<"\nEnter the Second Number "<<endl;
	cin>>c2;
	c3=c1+c2;
	c4=c1*c2;
	cout<<"\nThe First Number is  ";
	cout<<c1;
	cout<<"\nThe Second Number is  ";
	cout<<c2;
	cout<<"\nThe Addition is  ";
	cout<<c3;
	cout<<"\nThe Multiplication is  ";
	cout<<c4;
	return 0;
}

/*
Output
(1)
Default Constructor
0+0i

Enter the First Number 
	Enter the Real Part: 2
	Enter the Imaginary Part: 3

Enter the Second Number 
	Enter the Real Part: 1
	Enter the Imaginary Part: 3

The First Number is  2+3i

The Second Number is  1+3i

The Addition is  3+6i

The Multiplication is  -7+9i


(2)
Default Constructor
0+0i

Enter the First Number 
	Enter the Real Part: 1
	Enter the Imaginary Part: 2

Enter the Second Number 
	Enter the Real Part: 4
	Enter the Imaginary Part: 2

The First Number is  1+2i

The Second Number is  4+2i

The Addition is  5+4i

The Multiplication is  0+10i

*/


