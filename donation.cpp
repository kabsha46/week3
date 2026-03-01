#include<iostream>
using namespace std;
main() 
{ 
 cout<<"enter the movie name:";
 string movie;
 cin>>movie;
 
 cout<<"enter the adult ticket price :";
 float adultticket;
 cin>>adultticket;

cout<<"enter the number of child tickets sold :";
 float childticketsold;
 cin>>childticketsold;

 cout<<"--------------------------------------------------------------\n"<<movie:<<movie <<"\n";

 int totalsales;
totalsales = adultticket*adultticketsold+childticketsold;
cout<<"total amount generated from ticket sales :"<<totalsales <<"\n";

int donation;
donation=charity*totalsales/100;
cout<<"donation to charity ("<<charity<<"%):"<<donation <<"\n";

int reamaining;
remaining=totalsales-donation;
cout<<"remaining amount after donation:"<<remaining;
}