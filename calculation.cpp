#include<iostream>
using namespace std;
main()
{
cout<<"enter number 1:";
float num1;
cin>>num1;

cout<<"enter number 2:";
float num2;
cin>>num2;

cout<<"enter number 3:";
float num3;
cin>>num3;

cout<<"enter number 4:";
float num4;
cin>>num4;

cout <<"enter number 5:";
float num5;
cin>>num5;

float addfirstfive;
addfirstfive = num1+num2+num3+num4+num5;

cout<<"enter number 6:";
float num6;
cin>>num6;

cout<<"enter number 7:";
float num7;
cin>>num7;

cout<<"enter number 8:";
float num8;
cin>>num8;

cout<<"enter number 9:";
float num9;
cin>>num9;

cout<<"enter number 10:";
float num10;
cin>>num10;

float multiplynextfive;
multiplynextfive = num6+num7+num8+num9+num10;


cout<<"enter number11:";
float num11;
cin>>num11;

cout<<"enter number12:";
float num12;
cin>>num12;

cout<<"enter number13:";
float num13;
cin>>num13;

cout<<"enter number14:";
float num14;
cin>>num14;

cout<<"enter number15:";
float num15;
cin>>num15;

float subtractnextfive;
subtractnextfive =num11+num12+num13+num14+num15;

float addmultiplyaddition;
addmultiplyaddition = addfirstfive + multiplynextfive;

float finalresult;
finalresult=addmultiplyaddition-subtractnextfive;

cout<<"the final result is :"<<finalresult;
}  