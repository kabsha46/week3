#include<iostream>
using namespace std;

main( )
{
  cout << "enter intialvilocity:"<<endl;
  int  intialvilocity;
  cin>> intialvilocity;
  cout<< " enter acceleration:"<<endl;
  int acceleration;
  cin>>acceleration ;
  cout<<"enter time: "<<endl;
  int time;
  cin>>time;
  int finalvilocity = (acceleration * time )+intialvilocity;
  cout<<"the final velocity will be = "<<finalvilocity <<endl;
 }