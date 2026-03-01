#include<iostream>
using namespace std;

main( ) 
{
 cout << "enter total square meters of paint available";
 int n ;\\ total square meters of paint available 
 cin >> n;

 cout<<"enter wall width in meters";
 int wall width;
  cin >> wall width;

  cout <<"enter wall hight ";
  int hight;
  cin >>hight;
  int wallarea = wall width * hight;
  
int totalwalls = n / wallarea;
  
  cout <<"you can paint " << totalwalls << "complete walls."<<endl;

 }
