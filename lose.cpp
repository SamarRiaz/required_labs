#include<iostream>
using namespace std;
main()
{
float k,d;
string n;
cout<<"Enter the Name of the Person: ";
cin>>n;
cout<<"Enter the target weight loss in kilograms: ";
cin>>k;
d= k*15;
cout<<n<<" will need "<<d<<" days to lose "<<k<<" kg of weight by following the doctor's suggestions";
}