#include<iostream>
using namespace std;
main()
{
int seconds,minutes,fps,total_fps;
cout<<"Number of Minutes: ";
cin>>minutes;
seconds=minutes*60;
cout<<"Frames per Second: ";
cin>>fps;
total_fps=seconds*fps;
cout<<"Total Number of Frames: "<<total_fps;
}
