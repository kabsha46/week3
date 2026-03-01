#include<iostream>
using namespace std;

main()

{
cout<<"enter 4 numbers:";
int num;
cin>>num;

int result;
result=num%10+num/10%10+num/100%10+num/100%10;
cout<<" sum of individual digits:"<<result;
} 