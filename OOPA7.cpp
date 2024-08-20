/*
OOP Assignment-7

Que. Write a program in C++ to use map associative container. The keys will be the names of states and the values will be the populations of the states. When the program runs, the user is prompted to type the name of a state. The program then looks in the map, using the state name as an index and returns the population of the state.
*/

#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    map<string,int>populationMap;
    string state_name, name;
    int number, n;

    cout<<"\nHow many States Population you want to enter ? ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter the Name of the State: ";
        cin>>name;      //get key
        cout<<"\nEnter the Population of the State (In Cr): ";
        cin>>number;     //get value
        populationMap[name]=number;     //put them in map
    }

    populationMap.insert(pair<string, int>("Maharashtra", 114200000));      //insert state and its population

    map<string,int>::iterator iter;
    cout<<"\nPopulation of state\n";
    cout<<"\nSize of population Map: "<<populationMap.size()<<"\n";
    cout<<"\n\nSTATE NAME & POPULATION"<<endl;
    for(iter=populationMap.begin(); iter!=populationMap.end(); iter++)
    {
        cout<<"["<<iter->first<<" , "<<iter->second<<"]"<<"\n";
    }

    cout<<"\nEnter Name of the State to Search Population: ";
    cin>>state_name;
    iter = populationMap.find(state_name);
    if( iter!= populationMap.end() )
        cout<<"\nPopulation of "<<state_name<<" is "<<iter->second<<" Cr."<<endl;
    else
        cout<<"Key is not present in Populationmap"<<"\n";
    populationMap.clear();
}

/*
Output

How many States Population you want to enter ? 3

Enter the Name of the State: Gujrat

Enter the Population of the State (In Cr): 4523645

Enter the Name of the State: Asam

Enter the Population of the State (In Cr): 856423

Enter the Name of the State: Rajasthan

Enter the Population of the State (In Cr): 45231

Population of state

Size of population Map: 4


STATE NAME & POPULATION
[Asam , 856423]
[Gujrat , 4523645]
[Maharashtra , 114200000]
[Rajasthan , 45231]

Enter Name of the State to Search Population: Asam

Population of Asam is 856423 Cr.

*/