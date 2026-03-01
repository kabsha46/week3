#include<iostream> 
using namespace std;

main( )
{ 
  cout<<" enter your name" << endl ;
  string yourname;
  cin >> yourname;
  
  cout << "enter your weight in kg" << endl ;
  float weight;
  cin >> weight;

  int days = weight * 15;
 cout << "you will need "<< days<< " days to lose weight by doctor suggestion ";

}
  