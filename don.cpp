#include<iostream>
using namespace std;
main()
{
float ap,cp,ats,cts,cha,tm,don,re_m;
string m;
cout<<"Enter the movie name: ";
cin>>m;
cout<<"Enter the adult ticket price: $";
cin>>ap;
cout<<"Enter the child ticket price: $";
cin>>cp;
cout<<"Enter the number of adult tickets sold: ";
cin>>ats;
cout<<"Enter the number of child tickets sold: ";
cin>>cts;
cout<<"Enter the percentage of the amount to be donated to charity: ";
cin>>cha;
cout<<endl;
cout<<"Movie: "<<m<<endl;
tm= (ats*ap)+(cts*cp);
cout<<"Total amount generated from ticket sales: $"<<tm<<endl;
don= tm/10;
cout<<"Donation to charity (10%): $"<<don<<endl;
re_m= tm-don;
cout<<"Remaining amount after donation: $"<<re_m<<endl;

}