#include <iostream>
using namespace std;

main(){

float i_v, f_v, time, acceleration;

cout<<"Enter Initial Velocity (m/s): ";
    cin>>i_v;

cout<<"Enter Acceleration (m/s^2): ";
    cin>>acceleration;

cout<<"Enter Time (s): ";
    cin>>time;

f_v=(acceleration*time)+i_v;        
cout<<"Final Velocity (m/s): "<<f_v;

}