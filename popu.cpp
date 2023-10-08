#include <iostream>
using namespace std;
main()
{
double P,B,W;
cout<<"Enter the current world population: ";
cin>>P;
cout<<"Enter the monthly birth rate (number of births per month): ";
cin>>B;
W=B*360+P;
cout<<"The population in three decades will be: "<<W;
}