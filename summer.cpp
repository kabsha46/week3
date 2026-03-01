#include<iostream>
using namespace std;


main( )
 { 

 cout << "enter weight of the fertilizer bag in pounds:"<<endl;
 float weight;
 cin>> weight;

 cout << "enter the area the bag can cover in square feet :"<<endl;
 float area;
 cin >> area;
 
  cout << "enter price "<<endl;
  float price;
  cin >> price;
  float priceperpound= price / weight ;
  float costpersquarefeet = price / area;
  
  cout << "price per pound : " << priceperpound << endl;
  cout << "cost per square feet" << costpersquarefeet <<endl;
 }