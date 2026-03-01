#include<iostream>
using namespace std;

main( )

{
  int imposters;
  cout << "enter number of imposter: ";
  cin >> imposters;
  
  int players;
  cout << " enter the number of players:";
  cin >> players;
  
  double chance;
  chance = 100 * imposters / players;
  cout << "chance of being imposters:"<<(int)(chance+0.5) << "%";
 }