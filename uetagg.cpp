#include <iostream>
using namespace std;
main()
{
double m_marks,i_marks,e_marks;
double agg;
cout<<"Enter your Matriculation marks (out of 1100): ";
cin>>m_marks; 
cout<<"Enter your Intermediate marks (out of 510): ";
cin>>i_marks; 
cout<<"Enter your ECAT marks (out of 400): ";
cin>>e_marks;
agg= (((m_marks/1100)*10/100)+((i_marks/510)*40/100)+((e_marks/400)*50/100))*100;
cout<<"Total aggregate of student is: "<<agg;






}