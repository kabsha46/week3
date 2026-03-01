#include<iostream>  
using namespace std;
main( ) 
{ 

  int minutes,framespersecond,totalframes;
  cout << "enter  video minutes: ";
  cin >> minutes;

  cout << "enterframespersecond ";
  cin >> framespersecond ;

  totalframes = minutes * 60 * framespersecond;
  
  cout << "total number of frames :"<< totalframes;

  } 