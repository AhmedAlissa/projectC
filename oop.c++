#include<iostream>
main()
{
int i , number , posnumber ;
posnumber=0 ;
cout<<"please enter 10 values :\n";
for (i=1 ; i<=10 ; i++)
{
cout<<"enter value :" ;
cin>>number;
if (number <=0)
{
cout<<"This is negative or zero number \n";
}
posnumber+=number ;
}
cout<<"The sum of positive " ;
cout<<"values are :"<<posnumber;
}
