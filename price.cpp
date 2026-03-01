#include<iostream>
using namespace std;

main() 
{
cout<<"enter vegetable price per kg (in coins):";
float vegprice;
cin>>vegprice;

cout<<"enter fruit price per kg (in coins):";
float fruitprice;
cin>>fruitprice;

cout<<"enter total kg of vegetable:";
float vegkg;
cin>>vegkg;

cout<<"enter total kg of fruits:";
float fruitkg;
cin>>fruitkg;

float totalearing;
totalearing= (vegkg*vegprice+fruitkg*fruitprice);
 
cout<<"total earing in rupess (rps)"<<totalearing;
}