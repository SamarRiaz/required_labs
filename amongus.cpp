#include<iostream>
using namespace std;
main()
{
float i,p;
int percent;
cout<<"Enter Imposter Count: ";
cin>>i;
cout<<"Enter Player Count: ";
cin>>p;
percent= 100*(i/p);
cout<<"Chance of being an imposter: "<<percent<<"%";
}