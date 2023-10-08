#include<iostream>
using namespace std;
main()
{
int l,w,s_m,p;
cout<<"Number of square meters you can paint: ";
cin>>s_m;
cout<<"Width of the single wall (in meters): ";
cin>>w;
cout<<"Height of the single wall (in meters): ";
cin>>l;
p=s_m/(w*l);
cout<<"Number of walls you can paint: "<<p;
} 