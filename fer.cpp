#include<iostream>
using namespace std;
main()
{
float p,c,a,cp,ca;
cout<<"Enter the size of the fertilizer bag in pounds: ";
cin>>p;
cout<<"Enter the cost of the bag: $";
cin>>c;
cout<<"Enter the area in square feet that can be covered by the bag: ";
cin>>a;
cp=c/p;
cout<<"Cost of fertilizer per pound: $"<<cp<<endl;
ca=c/a;
cout<<"Cost of fertilizing per square foot: $"<<ca;
}