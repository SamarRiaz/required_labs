#include<iostream>
using namespace std;
main()
{
float vp,fp,kv,kf,t_e,rp;
cout<<"Enter vegetable price per kilogram (in coins): ";
cin>>vp;
cout<<"Enter fruit price per kilogram (in coins): ";
cin>>fp;
cout<<"Enter total kilograms of vegetables: ";
cin>>kv;
cout<<"Enter total kilograms of fruits: ";
cin>>kf;
t_e=(vp*kv)/1.94+(fp*kf)/1.94;
cout<<"Total earnings in Rupees (Rps): "<<t_e;

}