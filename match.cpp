#include <iostream>
using namespace std;
main()
{
double D,L,W,T;
string N;
cout<<"Enter the name of the cricket team: ";
cin>>N;
cout<<"Enter the number of wins: ";
cin>>W;
cout<<"Enter the number of draws: ";
cin>>D;
cout<<"Enter the number of losses: ";
cin>>L;
T=W*3+D*1+L*0;
cout<<N<<" has obtained "<<T<<" points in the Asia Cup tournament.";
}